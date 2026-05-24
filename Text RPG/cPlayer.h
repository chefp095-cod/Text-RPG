#pragma once

#include "stGameData.h"

class cEnemy;

class cPlayer
{
public:
	cPlayer();
	virtual ~cPlayer();

	int GetMaxLvl() const;
	void SetMaxLvl(int nNewMax);
	int GetPlayerLvl() const;
	void SetPlayerLvl(int nPlayerLvl);
	bool isEquip();

	virtual void LvlUp();
	virtual void LvlUpStats();
	virtual void ShowStats();

	float GetBaseAtkDamage();
	void SetBaseAtkDamage(float fBaseAtkDamage);
	float GetMaxHP();
	void SetMaxHP(float nMaxHP);
	float GetCurrentHP();
	void SetCurrentHP(float fCurrentHP);
	float GetMaxMN();
	void SetMaxMN(float fMaxMN);
	float GetCurrentMN();
	void SetCurrentMN(float fCurrentMN);
	int GetPlayerAr();
	void SetPlayerAr(int nPlayerAr);

	int GetPlayerGold();
	void SetPlayerGold(int nGold);

protected:
	Player::stBaseData Base;

private:
	
};