#pragma once

#include "PCH.h"

std::string GetSwordType(E_SWORD SwordType)
{
	std::string strSword;

	switch (SwordType)
	{
	case E_OLDS:
		strSword = "낡은 검";

		break;
	case E_NORMS:
		strSword = "일반 검";

		break;
	case E_FANCYS:
		strSword = "화려한 검";

		break;
	case E_EXO:
		strSword = "엑소칼리버";

		break;
	}

	return strSword;
}


stSword fnSword()
{
	stSword Swo;

	Swo.fOldSword = 10.0f;
	Swo.fNormSword = 20.5f;
	Swo.fFancySword = 30.8f;
	Swo.fExo = 55.9f;

	return Swo;
};

stSheild fnSheild()
{
	stSheild She;

	She.fWoodenSh = 5.0f;
	She.fMetalSh = 15.0f;
	She.fLegendSh = 25.5f;

	return She;
};

stWand fnWand()
{
	stWand Wan;

	Wan.fOldWand = 8.0f;
	Wan.fNormWand = 15.0f;
	Wan.fFancyWand = 25.5f;
	Wan.fMythWand = 46.9f;

	return Wan;
};

stSoul fnSoul()
{
	stSoul Soul;

	Soul.fBeginSoul = 10.0f;
	Soul.fNormSoul = 25.0f;
	Soul.fHCSoul = 50.0f;
	Soul.fLegSoul = 80.5f;

	return Soul;
};