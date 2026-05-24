#pragma once

namespace ItemType
{
	enum class E_SWORD { E_OLDS, E_NORMS, E_FANCYS, E_EXO };
	enum class E_SHEILD { E_WOOD, E_MERAL, E_LEGENDSH };
	enum class E_WAND { E_OLDW, E_NORMW, E_FANCYW, E_MYTH };
	enum class E_SOUL { E_BEGIN, E_NORMSO, E_HCSO, E_LENGENDSO };
}

// ItemType itemType = ItemType::Weapon;

// enum			INT 자동변환 됨		안정성 낮음		코드길이가 짧음
// enum_class	INT 자동변환 안됨	안정성 높음		코드길이가 김

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