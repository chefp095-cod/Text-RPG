#pragma once
#include "PCH.h"

class cWarrior : public cPlayer
{
public:
	cWarrior();
	~cWarrior() override;

	int GetBlock();
	void SetBlock();

	void ShowStats() final;
	void LvlUpStats() final;
 
protected:
	int nBlock;
};

