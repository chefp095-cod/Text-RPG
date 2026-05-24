#pragma once

#include "PCH.h"

class cItem;

class cInventory
{
public:
	cInventory();
	~cInventory();

	void ShowInven();

	void AddItem(cItem* ptrItem);
	void DeleteItem(cItem* ptrItem);

private:
	std::vector<cItem*> vecItem;
	const int nMax_Slots = 5;

};

