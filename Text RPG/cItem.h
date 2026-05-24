#pragma once

#include "stGameData.h"

class cItem
{
public:
	cItem(ItemData::E_ITEMID m_ID);
	~cItem();

	void ItemInit(ItemData::E_ITEMID m_ID);

private:
	ItemData::E_ITEMTYPE m_Type;
	ItemData::E_ITEMID m_ID;

	ItemData::stItemData m_Item;
};

