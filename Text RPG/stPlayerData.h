#pragma once

#include "PCH.h"

namespace Player
{
	struct stBaseStats
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
	};
}

namespace Enemy
{
	struct stBaseStats
}