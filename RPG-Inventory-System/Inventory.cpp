#include "Inventory.h"
#include <iostream>
#include <memory>

void Inventory::addItem(std::unique_ptr<Item> item)
{
	items.push_back(std::move(item));
}

void Inventory::displayInventory() const
{
	if (items.empty())
	{
		std::cout << "Inventory is empty." << std::endl;
		return;
	}
	std::cout << "Inventory:" << std::endl;
	for (const auto& item : items)
	{
		item->displayInfo();
		std::cout << std::endl;
	}
}
