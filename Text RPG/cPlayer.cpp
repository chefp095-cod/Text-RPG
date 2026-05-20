#include "PCH.h"
#include "cPlayer.h"

cPlayer::cPlayer()
{
	this->nPlayerLvl = 1;
	this->nMaxLvl = 10;

	this->fPlayerHP = 1000.0f;
	this->fCurrentHP = 1000.0f;

	this->fPlayerMN = 500.0f;
	this->fCurrentMN = 500.0f;

	this->fBaseAtkDamage = 30.0f;
	this->nPlayerAr = 10;
	this->nPlayerEXP = 0;
}

cPlayer::~cPlayer()
{

}

void cPlayer::ShowStats()
{
	std::cout << "모험가 스탯 상세" << std::endl;
	std::cout << "========================================" << std::endl;
	std::cout << "플레이어 레벨 : " << this->nPlayerLvl << std::endl;
	std::cout << "플레이어 HP : " << this->fCurrentHP << " / " << this->fPlayerHP << std::endl;
	std::cout << "플레이어 마나 : " << this->fCurrentMN << " / " << this->fPlayerMN << std::endl;
	std::cout << "플레이어 공격력 : " << this->fAtkDamage << std::endl;
	std::cout << "플레이어 방어력 : " << this->nPlayerAr << std::endl;
	std::cout << "========================================" << std::endl;
	std::cout << "플레이어 경험치 : " << this->nPlayerEXP << " / " << this->nMaxEXP << std::endl;
}

int cPlayer::GetPlayerLvl()
{
	return nPlayerLvl; // 현재 클래스 내부의 멤버를 반환 this-> 가 생략된걸로 치부됨
}

void cPlayer::SetPlayerLvl()
{
	if (this->nPlayerEXP >= this->nMaxEXP)
	{
		std::cout << "플레이어 레벨업!!!" << std::endl;

		LvlUpStats();
		SetPlayerHP();
		SetPlayerMN();
	}
}

void cPlayer::LvlUpStats()
{
	if (this->nMaxLvl > 10)
	{
		return;
	}

	else if (this->nMaxLvl <= 10)
	{
		this->nPlayerLvl++;
		this->fPlayerHP += 200;
		this->fPlayerMN += 50;
		this->nPlayerAr += 5;
		this->nMaxEXP *= 3;
	}
}

float cPlayer::GetAtkDamage()
{
	return fAtkDamage;
}

void cPlayer::SetAtkDamage(std::string strWeapon)
{
	
}

float cPlayer::GetPlayerHP()
{
	return fPlayerHP;
}

void cPlayer::SetPlayerHP()
{
	this->fCurrentHP = this->fPlayerHP;
}

float cPlayer::GetPlayerMN()
{
	return fPlayerMN;
}

void cPlayer::SetPlayerMN()
{
	this->fCurrentMN = this->fPlayerMN;
}

int cPlayer::GetPlayerAr()
{
	return nPlayerAr;
}

void cPlayer::SetPlayerAr()
{

}
