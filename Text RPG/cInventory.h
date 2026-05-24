#pragma once

#include "PCH.h"

stSword const fnSword();
stSheild const fnSheild();
stWand const fnWand();
stSoul const fnSoul();

class cInventory
{
public:
	cInventory();
	~cInventory();

	void ShowInven();

	void AddItem();

private:
	std::vector<stSword> vecItem;
	const int nMax_Slots = 5;

	stSword Swo;
	stSheild She;
	stWand Wan;
	stSoul Soul;
};

