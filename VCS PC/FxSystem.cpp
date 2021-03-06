#include "StdAfx.h"
#include "FxSystem.h"

#include "Rs.h"

Fx_c&	g_fx = *(Fx_c*)0xA9AE00;

unsigned char	Fx_c::m_bTextureFiltering;
FxQuality_e		Fx_c::m_bEffectsQuality;

//WRAPPER void Fx_c::SetFxQuality(FxQuality_e eQuality) { WRAPARG(eQuality); EAXJMP(0x49EA40); }
//WRAPPER FxQuality_e Fx_c::GetFxQuality() { EAXJMP(0x49EA50); }

WRAPPER void Fx_c::Init(void) { EAXJMP(0x49EA90); }
WRAPPER void Fx_c::Update(RwCamera *c, float t) { EAXJMP(0x49E640); }

unsigned char Fx_c::GetMaxTextureFilteringQuality()
{
	static unsigned char		bCachedMaxQuality = 0;

	if ( !bAnisotSupported )
	{
		// Trilinear is max
		// Can't cache the value as this var can be 0 if anisotropy is not supported OR it hasn't been checked yet
		return 1;
	}

	if ( bCachedMaxQuality == 0 )
	{
		auto	maxAnisot = RpAnisotGetMaxSupportedMaxAnisotropy();
	
		if ( maxAnisot >= 16 )
			// 16x is max
			bCachedMaxQuality = 5;
	
		else if ( maxAnisot >= 8 )
			// 8x is max
			bCachedMaxQuality = 4;

		else if ( maxAnisot >= 4 )
			// 3x is max
			bCachedMaxQuality = 3;

		else if ( maxAnisot >= 2 )
			// 2x is max
			bCachedMaxQuality = 2;
		else
			// No 2x even? Shi
			bCachedMaxQuality = 1;
	}
	return bCachedMaxQuality;
}


static StaticPatcher	Patcher([](){ 
						Memory::InjectHook(0x4A964D, Fx_c::GetEffectsQuality);
						Memory::InjectHook(0x4A9662, Fx_c::GetEffectsQuality);
						Memory::InjectHook(0x4A9678, Fx_c::GetEffectsQuality);

						Memory::InjectHook(0x4A97A7, Fx_c::GetEffectsQuality);
						Memory::InjectHook(0x4A97BC, Fx_c::GetEffectsQuality);
						Memory::InjectHook(0x4A97D2, Fx_c::GetEffectsQuality);

						Memory::InjectHook(0x4AA475, Fx_c::GetEffectsQuality);
						Memory::InjectHook(0x4AA48C, Fx_c::GetEffectsQuality);

						Memory::InjectHook(0x4AA56F, Fx_c::GetEffectsQuality);
						Memory::InjectHook(0x4AA586, Fx_c::GetEffectsQuality);

						Memory::InjectHook(0x7163AA, Fx_c::GetEffectsQuality);

						// Killed Visual FX Quality option
						Memory::Patch<DWORD>(0x49EA50, 0x000003B8);
						Memory::Patch<WORD>(0x49EA54, 0xC300);
									});