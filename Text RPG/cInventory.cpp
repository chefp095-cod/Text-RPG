#include "cInventory.h"
#include "cItem.h"
#include "PCH.h"

cInventory::cInventory()
{
	
}

cInventory::~cInventory()
{

}

void cInventory::ShowInven()
{
	std::cout << "================ <인벤토리> ================" << std::endl;
	std::cout << "인벤토리 상태 : " << vecItem.size() << " / " << nMax_Slots << std::endl;

	
}

void cInventory::AddItem(cItem* ptrItem)
{
	if ()
}