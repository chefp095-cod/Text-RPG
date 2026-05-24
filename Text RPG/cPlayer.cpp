#include "PCH.h"
#include "cPlayer.h"

cPlayer::cPlayer()
{
	SetPlayerLvl(1);
	SetMaxLvl(5);

	SetBaseAtkDamage(30);
	SetMaxHP(300);
	SetCurrentHP(GetMaxHP());
	SetMaxMN(200);
	SetCurrentMN(GetMaxMN());
	SetPlayerAr(5);

	SetPlayerGold(0);
}

cPlayer::~cPlayer()
{

}

void cPlayer::ShowStats()
{
	std::cout << "모험가 스탯 상세" << std::endl;
	std::cout << "========================================" << std::endl;
	std::cout << "플레이어 레벨 : " << Base.nPlayerLvl << std::endl;
	std::cout << "플레이어 HP : " << Base.fCurrentHP << " / " << Base.fMaxHP << std::endl;
	std::cout << "플레이어 마나 : " << Base.fCurrentMN << " / " << Base.fMaxMN << std::endl;
	std::cout << "플레이어 공격력 : " << Base.fAtkDamage << std::endl;
	std::cout << "플레이어 방어력 : " << Base.nPlayerAr << std::endl;
	std::cout << "========================================" << std::endl;
	std::cout << "플레이어 경험치 : " << Base.nPlayerEXP << " / " << Base.nMaxEXP << std::endl;
	std::cout << "플레이어 골드 : " << Base.nGold << std::endl;
}

int cPlayer::GetMaxLvl() const
{
	return Base.nMaxLvl;
}

void cPlayer::SetMaxLvl(int nNewMax)
{
	Base.nMaxLvl = nNewMax;
}

int cPlayer::GetPlayerLvl() const
{
	return Base.nPlayerLvl; // 현재 클래스 내부의 멤버를 반환 this-> 가 생략된걸로 치부됨
}

void cPlayer::SetPlayerLvl(int nPlayerLvl)
{
	Base.nMaxLvl = nPlayerLvl;
}

void cPlayer::LvlUpStats()
{
	if (Base.nPlayerLvl >= Base.nMaxLvl)
	{
		Base.nPlayerLvl = Base.nMaxLvl;

		return;
	}

		Base.nPlayerLvl++;
		Base.fMaxHP += 100.0;
		Base.fMaxMN += 50;
		Base.fBaseAtkDamage += 20;
		Base.nPlayerAr += 5;
		Base.nMaxEXP *= 3;
}

void cPlayer::LvlUp()
{
	while (Base.nPlayerEXP >= Base.nMaxEXP)
	{
		if (Base.nPlayerLvl >= 5)
		{
			break;
		}

		std::cout << "플레이어 레벨업!!!" << std::endl;

		Base.nPlayerEXP -= Base.nMaxEXP;

		LvlUpStats();
		SetCurrentHP(GetMaxHP());
		SetCurrentMN(GetMaxMN());
	}

	if (Base.nPlayerLvl >= Base.nMaxLvl)
	{
		Base.nPlayerEXP = 0;
	}
}

bool isEquip()
{

}

float cPlayer::GetBaseAtkDamage()
{
	return Base.fBaseAtkDamage;
}

void cPlayer::SetBaseAtkDamage(float fBaseAtkDamage)
{
	Base.fBaseAtkDamage = fBaseAtkDamage;
}

float cPlayer::GetMaxHP()
{
	return Base.fMaxHP;
}

void cPlayer::SetMaxHP(float fMaxHP)
{
	Base.fMaxHP = fMaxHP;
}

float cPlayer::GetCurrentHP()
{
	return Base.fCurrentHP;
}

void cPlayer::SetCurrentHP(float fCurrentHP)
{
	Base.fCurrentHP = fCurrentHP;
}

float cPlayer::GetMaxMN()
{
	return Base.fMaxMN;
}

void cPlayer::SetMaxMN(float fMaxMN)
{
	Base.fCurrentMN = fMaxMN;
}

float cPlayer::GetCurrentMN()
{
	return Base.fCurrentMN;
}

void cPlayer::SetCurrentMN(float fCurrentMN)
{
	Base.fCurrentMN = fCurrentMN;
}

int cPlayer::GetPlayerAr()
{
	return Base.nPlayerAr;
}

void cPlayer::SetPlayerAr(int nPlayerAr)
{
	Base.nPlayerAr = nPlayerAr;
}

int cPlayer::GetPlayerGold()
{
	return Base.nGold;
}

void cPlayer::SetPlayerGold(int nGold)
{
	Base.nGold = nGold;
}