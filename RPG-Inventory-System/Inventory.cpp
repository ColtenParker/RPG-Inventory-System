#include "Inventory.h"
#include <iostream>
#include <memory>

Inventory::Inventory(std::size_t maxSize, std::size_t itemCount) : maxSize(maxSize), itemCount(itemCount)
{
}

std::size_t Inventory::getMaxSize() const
{
	return maxSize;
}

std::size_t Inventory::getItemCount() const
{
	return itemCount;
}

void Inventory::addItem(std::unique_ptr<Item> item)
{
	if (itemCount >= maxSize)
	{
		std::cout << "Inventory is full. Cannot add item: " << item->getName() << std::endl;
		return;
	}
	items.push_back(std::move(item));
	itemCount++;
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
