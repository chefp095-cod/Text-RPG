#pragma once

#include "stGameData.h"

class cPlayer;

class cItem
{
public:
	cItem(ItemData::E_ITEMID m_ID);
	~cItem();

	void ItemInit(ItemData::E_ITEMID m_ID);
	void ShowStats();

	ItemData::E_ITEMTYPE GetType() const;
	ItemData::E_ITEMID GetID() const;
	ItemData::stItemData GetData() const;

private:
	ItemData::E_ITEMTYPE m_Type;
	ItemData::E_ITEMID m_ID;

	ItemData::stItemData m_Item;
};

