#pragma once

class cEnemy;

class cPlayer
{
public:
	cPlayer();
	virtual ~cPlayer();

	int GetMaxLvl() const;
	void SetMaxLvl(int nNewMax);
	int GetPlayerLvl() const;
	void SetPlayerLvl();
	bool isEquip();

	virtual void LvlUpStats();
	virtual void ShowStats();

	virtual float GetAtkDamage();
	virtual void SetAtkDamage(std::string strWeapon);
	virtual float GetMaxHP();
	virtual void SetMaxHP(float nMaxHP);
	virtual float GetPlayerMN();
	virtual void SetPlayerMN();
	virtual int GetPlayerAr();
	virtual void SetPlayerAr();

protected:

private:
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