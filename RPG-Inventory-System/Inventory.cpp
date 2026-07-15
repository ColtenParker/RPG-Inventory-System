#include "Inventory.h"
#include <iostream>
#include <memory>

Inventory::Inventory(std::size_t maxSize) : maxSize(maxSize)
{
}

std::size_t Inventory::getMaxSize() const
{
	return maxSize;
}

std::unique_ptr<Item> Inventory::addItem(std::unique_ptr<Item> item)
{
	if (items.size() >= maxSize)
	{
		std::cout << "Inventory is full. Cannot add item: " << item->getName() << std::endl;
		return item;
	}
	items.push_back(std::move(item));
	return nullptr;
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
