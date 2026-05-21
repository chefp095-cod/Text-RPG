#include "PCH.h"
#include "cPlayer.h"

cPlayer::cPlayer()
	: nPlayerLvl(1)
	, nMaxLvl(5)
	  
	, fPlayerHP(500.0f)
	, fCurrentHP(500.0f)
	  
	, fPlayerMN(300.0f)
	, fCurrentMN(300.0f)
	  
	, fBaseAtkDamage(30.0f)
	, nPlayerAr(10)
	, nPlayerEXP(0)
	, nMaxEXP(100)
{
}

cPlayer::~cPlayer()
{

}

void cPlayer::ShowStats()
{
	std::cout << "모험가 스탯 상세" << std::endl;
	std::cout << "========================================" << std::endl;
	std::cout << "플레이어 레벨 : " << nPlayerLvl << std::endl;
	std::cout << "플레이어 HP : " << fCurrentHP << " / " << fPlayerHP << std::endl;
	std::cout << "플레이어 마나 : " << fCurrentMN << " / " << fPlayerMN << std::endl;
	std::cout << "플레이어 공격력 : " << fAtkDamage << std::endl;
	std::cout << "플레이어 방어력 : " << nPlayerAr << std::endl;
	std::cout << "========================================" << std::endl;
	std::cout << "플레이어 경험치 : " << nPlayerEXP << " / " << nMaxEXP << std::endl;
}

int cPlayer::GetMaxLvl() const
{
	return nMaxLvl;
}

void cPlayer::SetMaxLvl(int nNewMax)
{
	nMaxLvl = nNewMax;
}

int cPlayer::GetPlayerLvl() const
{
	return nPlayerLvl; // 현재 클래스 내부의 멤버를 반환 this-> 가 생략된걸로 치부됨
}

void cPlayer::SetPlayerLvl()
{
	while (nPlayerEXP >= nMaxEXP)
	{
		std::cout << "플레이어 레벨업!!!" << std::endl;

		nPlayerEXP -= nMaxEXP;

		LvlUpStats();
		SetPlayerHP();
		SetPlayerMN();
	}

	if (nPlayerLvl >= nMaxLvl)
	{
		nPlayerEXP = 0;
	}
}

void cPlayer::LvlUpStats()
{
	if (nPlayerLvl >= nMaxLvl)
	{
		nPlayerLvl = nMaxLvl;

		return;
	}

		nPlayerLvl++;
		SetMaxHP(GetMaxHP() + 200.0f);
		fPlayerMN += 50;
		nPlayerAr += 5;
		nMaxEXP *= 3;
}

bool isEquip()
{

}

float cPlayer::GetAtkDamage()
{
	return fAtkDamage;
}

void cPlayer::SetAtkDamage(std::string strWeapon)
{
	
}

float cPlayer::GetMaxHP()
{
	return fMaxHP;
}

void cPlayer::SetMaxHP(float fMaxHP)
{
	this->fMaxHP = fMaxHP;
}

float cPlayer::GetPlayerMN()
{
	return fPlayerMN;
}

void cPlayer::SetPlayerMN()
{
	fCurrentMN = fPlayerMN;
}

int cPlayer::GetPlayerAr()
{
	return nPlayerAr;
}

void cPlayer::SetPlayerAr()
{

}
