#pragma once

enum E_SWORD { E_OLDS,E_NORMS,E_FANCYS,E_EXO };
enum E_SHEILD { E_WOOD,E_MERAL,E_LEGENDSH };
enum E_WAND { E_OLDW,E_NORMW,E_FANCYW,E_MYTH };
enum E_SOUL { E_BEGIN,E_NORMSO,E_HCSO,E_LENGENDSO };

struct stSword
{
	float fOldSword;
	float fNormSword;
	float fFancySword;
	float fExo;
};

struct stSheild
{
	float fWoodenSh;
	float fMetalSh;
	float fLegendSh;
};

struct stWand
{
	float fOldWand;
	float fNormWand;
	float fFancyWand;
	float fMythWand;
};

struct stSoul
{
	float fBeginSoul;
	float fNormSoul;
	float fHCSoul;
	float fLegSoul;
};