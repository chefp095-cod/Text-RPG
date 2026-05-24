#include "cItem.h"

cItem::cItem(ItemData::E_ITEMID m_ID)
{
	ItemInit(m_ID);
}

cItem::~cItem()
{

}

void cItem::ItemInit(ItemData::E_ITEMID m_ID)
{
	if (m_ID >= ItemData::SWORD_OLD && m_ID <= 105)
	{
		m_Type = ItemData::E_ITEMTYPE::E_SWORD;
	}
	else if (m_ID >= ItemData::SHIELD_WOOD && m_ID <= 205)
	{
		m_Type = ItemData::E_ITEMTYPE::E_SHEILD;
	}
	else if (m_ID >= ItemData::WAND_OLD && m_ID <= 305)
	{
		m_Type = ItemData::E_ITEMTYPE::E_WAND;
	}
	else if (m_ID >= ItemData::SOUL_BEGIN && m_ID <= 405)
	{
		m_Type = ItemData::E_ITEMTYPE::E_SOUL;
	}

	switch (m_ID)
	{
	case ItemData::SWORD_OLD:
		m_Item = { "낡은 검", 10.0f, 0.0f, 1, 100, 20 };
		break;
	case ItemData::SWORD_NORM:
		m_Item = { "일반 검", 19.5f, 0.0f, 2, 300, 50 };
		break;
	case ItemData::SWORD_FANCYS:
		m_Item = { "화려한 검", 28.5f, 0.0f, 3, 600, 100 };
		break;
	case ItemData::SWORD_EXO:
		m_Item = { "엑스칼리버", 65.5f, 0.0f, 5, 1500, 500 };
		break;

	case ItemData::SHIELD_WOOD:
		m_Item = { "나무 방패", 0.0f, 0.0f, 1, 70, 5 };
		break;
	case ItemData::SHIELD_METAL:
		m_Item = { "철제 방패", 0.0f, 0.0f, 3, 450, 35 };
		break;
	case ItemData::SHIELD_LEGEND:
		m_Item = { "미카엘 방패", 0.0f, 0.0f, 7, 1250, 450 };
		break;

	case ItemData::WAND_OLD:
		m_Item = { "낡은 지팡이", 0.0f, 15.0f, 0 ,120, 30 };
		break;
	case ItemData::WAND_NORM:
		m_Item = { "일반 지팡이", 0.0f, 30.5f, 0, 350, 55 };
		break;
	case ItemData::WAND_FANCY:
		m_Item = { "화려한 지팡이", 0.0f, 55.5f, 0, 700, 150 };
		break;
	case ItemData::WAND_MYTH:
		m_Item = { "딱총나무 지팡이", 0.0f, 99.9f, 0, 1800, 650 };
		break;

	case ItemData::SOUL_BEGIN:
		m_Item = { "초보자 소울", 0.0f, 30.5f, 0, 105, 20 };
		break;
	case ItemData::SOUL_NORM:
		m_Item = { "일반 소울", 0.0f, 55.5f, 0, 500, 150 };
		break;
	case ItemData::SOUL_HC:
		m_Item = { "피닉스 소울", 0.0f, 105.5f, 0, 1300, 455 };
		break;
	}
}

ItemData::E_ITEMTYPE cItem::GetType() const
{
	return m_Type;
}

ItemData::E_ITEMID cItem::GetID() const
{
	return m_ID;
}

ItemData::stItemData cItem::GetData() const
{
	return m_Item;
}

void cItem::ShowStats()
{
	if (m_Type == ItemData::E_ITEMTYPE::E_SWORD)
	{
		std::cout << "물리 공격력 : " << m_Item.fItemAtkDamage << std::endl;
		std::cout << "억지력 : " << m_Item.nBlock << std::endl;
		std::cout << "구매 가격 : " << m_Item.nBuyPrice << std::endl;
		std::cout << "판매 가격 : " << m_Item.nSellPrice << std::endl;
	}

	else if (m_Type == ItemData::E_ITEMTYPE::E_SHEILD)
	{
		std::cout << "억지력 : " << m_Item.nBlock << std::endl;
		std::cout << "구매 가격 : " << m_Item.nBuyPrice << std::endl;
		std::cout << "판매 가격 : " << m_Item.nSellPrice << std::endl;
	}

	else if (m_Type == ItemData::E_ITEMTYPE::E_WAND)
	{
		std::cout << "스킬 공격력 : " << m_Item.fItemSKDamage << std::endl;
		std::cout << "구매 가격 : " << m_Item.nBuyPrice << std::endl;
		std::cout << "판매 가격 : " << m_Item.nSellPrice << std::endl;
	}

	else if (m_Type == ItemData::E_ITEMTYPE::E_SOUL)
	{
		std::cout << "스킬 공격력 : " << m_Item.fItemSKDamage << std::endl;
		std::cout << "구매 가격 : " << m_Item.nBuyPrice << std::endl;
		std::cout << "판매 가격 : " << m_Item.nSellPrice << std::endl;
	}
}