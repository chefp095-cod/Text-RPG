#pragma once

#include "PCH.h"

stSword const fnSword()
{
	stSword Swo;

	Swo.fOldSword = 10.0f;
	Swo.fNormSword = 20.5f;
	Swo.fFancySword = 30.8f;
	Swo.fExo = 55.9f;

	return Swo;
};

stSheild const fnSheild()
{
	stSheild She;

	She.fWoodenSh = 5.0f;
	She.fMetalSh = 15.0f;
	She.fLegendSh = 25.5f;

	return She;
};

stWand const fnWand()
{
	stWand Wan;

	Wan.fOldWand = 8.0f;
	Wan.fNormWand = 15.0f;
	Wan.fFancyWand = 25.5f;
	Wan.fMythWand = 46.9f;

	return Wan;
};

stSoul const fnSoul()
{
	stSoul Soul;

	Soul.fBeginSoul = 10.0f;
	Soul.fNormSoul = 25.0f;
	Soul.fHCSoul = 50.0f;
	Soul.fLegSoul = 80.5f;

	return Soul;
};

std::string GetSwordType(ItemType::E_SWORD SwordType)
{
	std::string strSword;

	switch (SwordType)
	{
	case ItemType::E_SWORD::E_OLDS:
		strSword = "낡은 검";

		break;
	case ItemType::E_SWORD::E_NORMS:
		strSword = "일반 검";

		break;
	case ItemType::E_SWORD::E_FANCYS:
		strSword = "화려한 검";

		break;
	case ItemType::E_SWORD::E_EXO:
		strSword = "엑스칼리버";

		break;
	}

	return strSword;
}

std::string GetSheildType(ItemType::E_SHEILD SheildType)
{
	std::string strSheild;

	switch (SheildType)
	{
	case ItemType::E_SHEILD::E_WOOD:
		strSheild = "나무 방패";

		break;
	case ItemType::E_SHEILD::E_MERAL:
		strSheild = "철제 방패";

		break;
	case ItemType::E_SHEILD::E_LEGENDSH:
		strSheild = "미카엘 방패";

		break;
	}

	return strSheild;
}

std::string GetWandType(ItemType::E_WAND WandType)
{
	std::string strWand;

	switch (WandType)
	{
	case ItemType::E_WAND::E_OLDW:
		strWand = "낡은 지팡이";

		break;
	case ItemType::E_WAND::E_NORMW:
		strWand = "일반 지팡이";

		break;
	case ItemType::E_WAND::E_FANCYW:
		strWand = "화려한 지팡이";

		break;
	case ItemType::E_WAND::E_MYTH:
		strWand = "딱총나무 지팡이";

		break;
	}

	return strWand;
}

std::string GetSoulType(ItemType::E_SOUL SoulType)
{
	std::string strSoul;

	switch (SoulType)
	{
	case ItemType::E_SOUL::E_BEGIN:
		strSoul = "초보자 소울";

		break;
	case ItemType::E_SOUL::E_NORMSO:
		strSoul = "일반 소울";

		break;
	case ItemType::E_SOUL::E_HCSO:
		strSoul = "고급 소울";

		break;
	case ItemType::E_SOUL::E_LENGENDSO:
		strSoul = "피닉스 소울";

		break;
	}

	return strSoul;
}