#pragma once

class cEnemy;

class cPlayer
{
public:
	cPlayer();
	virtual ~cPlayer();

	int GetPlayerLvl();
	void SetPlayerLvl();

	virtual void LvlUpStats();
	virtual void ShowStats();

	virtual float GetAtkDamage();
	virtual void SetAtkDamage(std::string strWeapon);
	virtual float GetPlayerHP();
	virtual void SetPlayerHP();
	virtual float GetPlayerMN();
	virtual void SetPlayerMN();
	virtual int GetPlayerAr();
	virtual void SetPlayerAr();

protected:
	int nPlayerLvl;
	float fPlayerHP;
	float fCurrentHP;
	float fPlayerMN;
	float fCurrentMN;
	float fBaseAtkDamage;
	float fAtkDamage;
	float fSKDamage;
	int nPlayerAr;
	int nPlayerEXP;
	int nMaxEXP = 100;

private:
	int nMaxLvl;
};