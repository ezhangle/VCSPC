#ifndef __MEMORYMGR
#define __MEMORYMGR

#define WRAPPER __declspec(naked)
#define DEPRECATED __declspec(deprecated)
#define EAXJMP(a) { _asm mov eax, a _asm jmp eax }
#define VARJMP(a) { _asm jmp a }
#define WRAPARG(a) UNREFERENCED_PARAMETER(a)

#define NOVMT __declspec(novtable)
#define SETVMT(a) *((DWORD_PTR*)this) = (DWORD_PTR)a

enum
{
	PATCH_CALL,
	PATCH_JUMP,
	PATCH_NOTHING,
};

// Debug checker to make sure reversed functions don't still get hacks
template<typename AT>
inline void CheckMemoryBanList(AT address)
{
#ifdef DEVBUILD
	unsigned int	nAddress = (unsigned int)address;

	assert(nAddress < 0x5794A0 || nAddress > 0x57B43F);
	assert(nAddress < 0x576FE0 || nAddress > 0x5773CF);
	assert(nAddress < 0x57CD50 || nAddress > 0x57D51F);
#endif
}

namespace Memory
{
	template<typename T, typename AT>
	inline void		Patch(AT address, T value)
	{ CheckMemoryBanList(address); *(T*)address = value; }

	template<typename AT>
	inline void		Nop(AT address, unsigned int nCount)
	// TODO: Finish multibyte nops
	{ CheckMemoryBanList(address); memset((void*)address, 0x90, nCount); }

	template<typename AT, typename HT>
	inline void		InjectHook(AT address, HT hook, unsigned int nType=PATCH_NOTHING)
	{
		CheckMemoryBanList(address);
		DWORD		dwHook;
		_asm
		{
			mov		eax, hook
			mov		dwHook, eax
		}

		switch ( nType )
		{
		case PATCH_JUMP:
			*(BYTE*)address = 0xE9;
			break;
		case PATCH_CALL:
			*(BYTE*)address = 0xE8;
			break;
		}

		*(DWORD*)((DWORD)address + 1) = dwHook - (DWORD)address - 5;
	}
};

namespace MemoryVP
{
	template<typename T, typename AT>
	inline void		Patch(AT address, T value)
	{
		DWORD		dwProtect[2];
		VirtualProtect((void*)address, sizeof(T), PAGE_EXECUTE_READWRITE, &dwProtect[0]);
		*(T*)address = value;
		VirtualProtect((void*)address, sizeof(T), dwProtect[0], &dwProtect[1]);
	}

	template<typename AT>
	inline void		Nop(AT address, unsigned int nCount)
	// TODO: Finish multibyte nops
	{
		DWORD		dwProtect[2];
		VirtualProtect((void*)address, nCount, PAGE_EXECUTE_READWRITE, &dwProtect[0]);
		memset((void*)address, 0x90, nCount);
		VirtualProtect((void*)address, nCount, dwProtect[0], &dwProtect[1]);
	}

	template<typename AT, typename HT>
	inline void		InjectHook(AT address, HT hook, unsigned int nType=PATCH_NOTHING)
	{
		DWORD		dwProtect[2];
		switch ( nType )
		{
		case PATCH_JUMP:
			VirtualProtect((void*)address, 5, PAGE_EXECUTE_READWRITE, &dwProtect[0]);
			*(BYTE*)address = 0xE9;
			break;
		case PATCH_CALL:
			VirtualProtect((void*)address, 5, PAGE_EXECUTE_READWRITE, &dwProtect[0]);
			*(BYTE*)address = 0xE8;
			break;
		default:
			VirtualProtect((void*)((DWORD)address + 1), 4, PAGE_EXECUTE_READWRITE, &dwProtect[0]);
			break;
		}
		DWORD		dwHook;
		_asm
		{
			mov		eax, hook
			mov		dwHook, eax
		}

		*(DWORD*)((DWORD)address + 1) = (DWORD)dwHook - (DWORD)address - 5;
		if ( nType == PATCH_NOTHING )
			VirtualProtect((void*)((DWORD)address + 1), 4, dwProtect[0], &dwProtect[1]);
		else
			VirtualProtect((void*)address, 5, dwProtect[0], &dwProtect[1]);
	}
};

// Old code, remove asap
#define patch(a, v, s) _patch((void*)(a), (DWORD)(v), (s))

__declspec(deprecated) inline void _patch(void* pAddress, DWORD data, DWORD iSize)
{
	switch(iSize)
	{
		case 1: *(BYTE*)pAddress = (BYTE)data;
			break;
		case 2: *(WORD*)pAddress = (WORD)data;
			break;
		case 4: *(DWORD*)pAddress = (DWORD)data;
			break;
	}
}

#endif