#ifndef __TIMECYCLE
#define __TIMECYCLE
#include "ColourSet.h"

#define NUMWEATHERS 23
#define NUMHOURS 24
#define EXTRASTART 21

struct CBox
{
	CVector min;
	CVector max;
};

struct CTimeCycleBox
{
	CBox box;
	short farclp;
	uint8 lodDistMult;
	int extraColor;
	float strength;
	float falloff;
};

class CTimeCycle
{
public:
	static uint8 m_nDirectionalMult[NUMHOURS][NUMWEATHERS];
	static uint8 m_nWaterFogAlpha[NUMHOURS][NUMWEATHERS];
	static uint8 m_nHighLightMinIntensity[NUMHOURS][NUMWEATHERS];
	static uint8 m_fCloudAlpha[NUMHOURS][NUMWEATHERS];
	static uint8 m_fPostFx2Alpha[NUMHOURS][NUMWEATHERS];
	static uint8 m_fPostFx2Blue[NUMHOURS][NUMWEATHERS];
	static uint8 m_fPostFx2Green[NUMHOURS][NUMWEATHERS];
	static uint8 m_fPostFx2Red[NUMHOURS][NUMWEATHERS];
	static uint8 m_fPostFx1Alpha[NUMHOURS][NUMWEATHERS];
	static uint8 m_fPostFx1Blue[NUMHOURS][NUMWEATHERS];
	static uint8 m_fPostFx1Green[NUMHOURS][NUMWEATHERS];
	static uint8 m_fPostFx1Red[NUMHOURS][NUMWEATHERS];
	static uint8 m_fWaterAlpha[NUMHOURS][NUMWEATHERS];
	static uint8 m_fWaterBlue[NUMHOURS][NUMWEATHERS];
	static uint8 m_fWaterGreen[NUMHOURS][NUMWEATHERS];
	static uint8 m_fWaterRed[NUMHOURS][NUMWEATHERS];
	static uint8 m_nFluffyCloudsBottomRed[NUMHOURS][NUMWEATHERS];
	static uint8 m_nFluffyCloudsBottomGreen[NUMHOURS][NUMWEATHERS];
	static uint8 m_nFluffyCloudsBottomBlue[NUMHOURS][NUMWEATHERS];
	static uint8 m_nLowCloudsBlue[NUMHOURS][NUMWEATHERS];
	static uint8 m_nLowCloudsGreen[NUMHOURS][NUMWEATHERS];
	static uint8 m_nLowCloudsRed[NUMHOURS][NUMWEATHERS];
	static uint8 m_fLightsOnGroundBrightness[NUMHOURS][NUMWEATHERS];
	static int16 m_fFogStart[NUMHOURS][NUMWEATHERS];
	static int16 m_fFarClip[NUMHOURS][NUMWEATHERS];
	static uint8 m_nPoleShadowStrength[NUMHOURS][NUMWEATHERS];
	static uint8 m_nLightShadowStrength[NUMHOURS][NUMWEATHERS];
	static uint8 m_nShadowStrength[NUMHOURS][NUMWEATHERS];
	static uint8 m_fSpriteBrightness[NUMHOURS][NUMWEATHERS];
	static uint8 m_fSpriteSize[NUMHOURS][NUMWEATHERS];
	static uint8 m_fSunSize[NUMHOURS][NUMWEATHERS];
	static uint8 m_nSunCoronaBlue[NUMHOURS][NUMWEATHERS];
	static uint8 m_nSunCoronaGreen[NUMHOURS][NUMWEATHERS];
	static uint8 m_nSunCoronaRed[NUMHOURS][NUMWEATHERS];
	static uint8 m_nSunCoreBlue[NUMHOURS][NUMWEATHERS];
	static uint8 m_nSunCoreGreen[NUMHOURS][NUMWEATHERS];
	static uint8 m_nSunCoreRed[NUMHOURS][NUMWEATHERS];
	static uint8 m_nSkyBottomBlue[NUMHOURS][NUMWEATHERS];
	static uint8 m_nSkyBottomGreen[NUMHOURS][NUMWEATHERS];
	static uint8 m_nSkyBottomRed[NUMHOURS][NUMWEATHERS];
	static uint8 m_nSkyTopBlue[NUMHOURS][NUMWEATHERS];
	static uint8 m_nSkyTopGreen[NUMHOURS][NUMWEATHERS];
	static uint8 m_nSkyTopRed[NUMHOURS][NUMWEATHERS];
	static uint8 m_nAmbientBlue_Obj[NUMHOURS][NUMWEATHERS];
	static uint8 m_nAmbientGreen_Obj[NUMHOURS][NUMWEATHERS];
	static uint8 m_nAmbientRed_Obj[NUMHOURS][NUMWEATHERS];
	static uint8 m_nAmbientBlue[NUMHOURS][NUMWEATHERS];
	static uint8 m_nAmbientGreen[NUMHOURS][NUMWEATHERS];
	static uint8 m_nAmbientRed[NUMHOURS][NUMWEATHERS];

	// VCS
	static uint8 m_nAmbientRed_Bl[NUMHOURS][NUMWEATHERS];
	static uint8 m_nAmbientGreen_Bl[NUMHOURS][NUMWEATHERS];
	static uint8 m_nAmbientBlue_Bl[NUMHOURS][NUMWEATHERS];
	static uint8 m_nAmbientRed_Obj_Bl[NUMHOURS][NUMWEATHERS];
	static uint8 m_nAmbientGreen_Obj_Bl[NUMHOURS][NUMWEATHERS];
	static uint8 m_nAmbientBlue_Obj_Bl[NUMHOURS][NUMWEATHERS];
	static uint8 m_nDirectionalRed[NUMHOURS][NUMWEATHERS];
	static uint8 m_nDirectionalGreen[NUMHOURS][NUMWEATHERS];
	static uint8 m_nDirectionalBlue[NUMHOURS][NUMWEATHERS];
	static uint8 m_nRadiosityIntensity[NUMHOURS][NUMWEATHERS];
	static uint8 m_nRadiosityLimit[NUMHOURS][NUMWEATHERS];
	static uint8 m_nFluffyCloudsTopRed[NUMHOURS][NUMWEATHERS];
	static uint8 m_nFluffyCloudsTopGreen[NUMHOURS][NUMWEATHERS];
	static uint8 m_nFluffyCloudsTopBlue[NUMHOURS][NUMWEATHERS];
	static uint8 m_fBlurRed[NUMHOURS][NUMWEATHERS];
	static uint8 m_fBlurGreen[NUMHOURS][NUMWEATHERS];
	static uint8 m_fBlurBlue[NUMHOURS][NUMWEATHERS];
	static float m_fBlurAlpha[NUMHOURS][NUMWEATHERS];
	static float m_fBlurOffset[NUMHOURS][NUMWEATHERS];

	static float &m_BrightnessAddedToAmbientRed;
	static float &m_BrightnessAddedToAmbientGreen;
	static float &m_BrightnessAddedToAmbientBlue;

	static int &m_ExtraColourWeatherType;
	static int &m_ExtraColour;
	static int &m_bExtraColourOn;
	static float &m_ExtraColourInter;
	static CVector &m_vecDirnLightToSun;
	static int &m_FogReduction;
	static CVector *m_VectorToSun;	// [16]
	static float *m_fShadowFrontX;	// [16]
	static float *m_fShadowFrontY;	// [16]
	static float *m_fShadowSideX;	// [16]
	static float *m_fShadowSideY;	// [16]
	static float *m_fShadowDisplacementX;	// [16]
	static float *m_fShadowDisplacementY;	// [16]
	static int &m_CurrentStoredValue;
	static RwRGBA &m_BelowHorizonGrey;
	static CColourSet m_CurrentColours;
	static CColourSet &m_CurrentColours_exe;
	static void CopyWeather(int dst, int src);

	static void Initialise(bool unused);
	static void CalcColoursForPoint(float x, float y, float z, CColourSet *colorset);
	static void StartExtraColour(int extracolor, int keepInter);
	static void FindTimeCycleBox(float x, float y, float z, CTimeCycleBox **box, float *interp, bool checkLod, bool checkFar, CTimeCycleBox *exclude);
	static double FindFarClipForCoors(float x, float y, float z);
	static void Update(void);

	// some getters
	static float GetAmbientRed(void) { return m_CurrentColours.ambr; }
	static float GetAmbientGreen(void) { return m_CurrentColours.ambg; }
	static float GetAmbientBlue(void) { return m_CurrentColours.ambb; }
	static float GetAmbientRed_Obj(void) { return m_CurrentColours.ambobjr; }
	static float GetAmbientGreen_Obj(void) { return m_CurrentColours.ambobjg; }
	static float GetAmbientBlue_Obj(void) { return m_CurrentColours.ambobjb; }
	static float GetMaterialMultRed(void) { return m_CurrentColours.vertmultr; }
	static float GetMaterialMultGreen(void) { return m_CurrentColours.vertmultg; }
	static float GetMaterialMultBlue(void) { return m_CurrentColours.vertmultb; }
	static float GetDirectionalRed(void) { return m_CurrentColours.dirr; }
	static float GetDirectionalGreen(void) { return m_CurrentColours.dirg; }
	static float GetDirectionalBlue(void) { return m_CurrentColours.dirb; }
	static int GetSkyTopRed(void) { return m_CurrentColours.skytopr; }
	static int GetSkyTopGreen(void) { return m_CurrentColours.skytopg; }
	static int GetSkyTopBlue(void) { return m_CurrentColours.skytopb; }
	static int GetSkyBottomRed(void) { return m_CurrentColours.skybotr; }
	static int GetSkyBottomGreen(void) { return m_CurrentColours.skybotg; }
	static int GetSkyBottomBlue(void) { return m_CurrentColours.skybotb; }
	static float GetFarClip(void) { return m_CurrentColours.farclp; }
	static float GetFogStart(void) { return m_CurrentColours.fogst; }
	static int GetRadiosityLimit(void) { return m_CurrentColours.radiosityLimit; }
	static int GetRadiosityIntensity(void) { return m_CurrentColours.radiosityIntensity; }
	static int GetBlurRed(void) { return m_CurrentColours.blurr; }
	static int GetBlurGreen(void) { return m_CurrentColours.blurg; }
	static int GetBlurBlue(void) { return m_CurrentColours.blurb; }
	static int GetBlurAlpha(void) { return m_CurrentColours.blura; }
	static int GetBlurOffset(void) { return m_CurrentColours.bluroffset; }
	// setters
	static void SetSkyBottomRed(int c) { m_CurrentColours.skybotr = c; }
	static void SetSkyBottomGreen(int c) { m_CurrentColours.skybotg = c; }
	static void SetSkyBottomBlue(int c) { m_CurrentColours.skybotb = c; }
};

#endif