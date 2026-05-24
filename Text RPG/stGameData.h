#pragma once

#include "PCH.h"

namespace Player
{
	struct stBaseData
	{
		int nPlayerLvl;
		int nMaxLvl;

		float fMaxHP;
		float fCurrentHP;
		float fMaxMN;
		float fCurrentMN;

		float fBaseAtkDamage;
		float fAtkDamage;
		float fSKDamage;

		int nPlayerAr;

		int nPlayerEXP;
		int nMaxEXP;

		int nGold;
	};
}

namespace Enemy
{
	struct stBaseData
	{

	};
}

namespace ItemData
{
	struct stItemData
	{
		std::string strName;

		float fItemAtkDamage;
		float fItemSKDamage;
		int nBlock;
		
		int nBuyPrice;
		int nSellPrice;
	};

	enum class E_ITEMTYPE { E_SWORD, E_SHEILD, E_WAND, E_SOUL };

	enum E_ITEMID
	{
		SWORD_OLD = 100, SWORD_NORM, SWORD_FANCYS, SWORD_EXO,
		SHIELD_WOOD = 200, SHIELD_METAL, SHIELD_LEGEND,
		WAND_OLD = 300, WAND_NORM, WAND_FANCY, WAND_MYTH,
		SOUL_BEGIN = 400, SOUL_NORM, SOUL_HC, SOUL_LEGEND
	};
}

// window API 사용후 실제 움직임구현 + 움직임화면, 전투화면
// api 공부