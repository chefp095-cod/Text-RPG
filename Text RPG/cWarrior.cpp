#include "PCH.h"
#include "cWarrior.h"

cWarrior::cWarrior()
{
	this->nPlayerLvl = 1;

	this->fPlayerHP = 1500.5f;
	this->fCurrentHP = 1500.5f;

	this->fPlayerMN = 500.0f;
	this->fCurrentMN = 500.0f;

	this->nPlayerAr = 30;
	this->nBlock = 10;

	this->nPlayerEXP = 0;
}

cWarrior::~cWarrior()
{

}

void cWarrior::ShowStats()
{
	std::cout << "전사 스탯 상세" << std::endl;
	std::cout << "========================================" << std::endl;
	std::cout << "플레이어 레벨 : " << this->nPlayerLvl << std::endl;
	std::cout << "플레이어 HP : " << this->fCurrentHP << " / " << this->fPlayerHP << std::endl;
	std::cout << "플레이어 마나 : " << this->fCurrentMN << " / " << this->fPlayerMN << std::endl;
	std::cout << "플레이어 공격력 : " << this->fAtkDamage << std::endl;
	std::cout << "플레이어 방어력 : " << this->nPlayerAr << std::endl;
	std::cout << "플레이어 억지력 : " << this->nBlock << std::endl;
	std::cout << "========================================" << std::endl;
	std::cout << "플레이어 경험치 : " << this->nPlayerEXP << "/" << this->nMaxEXP << std::endl;
}

void cWarrior::LvlUpStats()
{
	if (this->nMaxLvl > 15)
	{
		return;
	}

	else if (this->nMaxLvl <= 15)
	{
		this->nPlayerLvl++;
		this->fPlayerHP += 250;
		this->fPlayerMN += 30;
		this->nPlayerAr += 7.5;
		this->nMaxEXP *= 3;
		this->nBlock += 2
	}
}

int cWarrior::GetBlock()
{
	return nBlock;
}

void cWarrior::SetBlock()
{
	this->nBlock = 
}

