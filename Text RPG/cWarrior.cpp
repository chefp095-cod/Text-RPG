#include "PCH.h"
#include "cWarrior.h"

cWarrior::cWarrior(cPlayer* C_Character)
	: nBlock(5)
{
	 = C_Charater->nMaxLvl + 10;
}

cWarrior::~cWarrior()
{

}

void cWarrior::ShowStats()
{
	std::cout << "전사 스탯 상세" << std::endl;
	std::cout << "========================================" << std::endl;
	std::cout << "플레이어 레벨 : " << nPlayerLvl << std::endl;
	std::cout << "플레이어 HP : " << fCurrentHP << " / " << fPlayerHP << std::endl;
	std::cout << "플레이어 마나 : " << fCurrentMN << " / " << fPlayerMN << std::endl;
	std::cout << "플레이어 공격력 : " << fAtkDamage << std::endl;
	std::cout << "플레이어 방어력 : " << nPlayerAr << std::endl;
	std::cout << "플레이어 억지력 : " << nBlock << std::endl;
	std::cout << "========================================" << std::endl;
	std::cout << "플레이어 경험치 : " << nPlayerEXP << "/" << nMaxEXP << std::endl;
}

void cWarrior::LvlUpStats()
{
	if (GetPlayerLvl() >= GetMaxLvl())
	{
		return;
	}

		nPlayerLvl++;
		fPlayerHP += 250;
		fPlayerMN += 30;
		nPlayerAr += 7.5;
		nMaxEXP *= 3;
		nBlock += 1;
}

int cWarrior::GetBlock()
{
	return nBlock;
}

void cWarrior::SetBlock()
{
	this->nBlock = 
}

