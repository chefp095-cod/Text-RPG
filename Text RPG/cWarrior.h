#pragma once
#include "PCH.h"

class cWarrior : public cPlayer
{
public:
	cWarrior();
	~cWarrior() override;

	void ShowStats() override;
	void LvlUpStats() override;
 
	int GetBlock();
	void SetBlock();

private:
	int nBlock;
	int nMaxLvl = 15;
};

