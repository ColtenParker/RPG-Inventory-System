#include "Inventory.h"
#include <iostream>
#include <algorithm>

Inventory::Inventory(std::size_t maxSize) : maxSize(maxSize)
{
}

std::size_t Inventory::getMaxSize() const
{
	return maxSize;
}

std::unique_ptr<Item> Inventory::addItem(std::unique_ptr<Item> item)
{
	if (!item)
	{
		std::cout << "Cannot add a null item to the inventory." << std::endl;
		return nullptr;
	}
	else if (items.size() >= maxSize)
	{
		std::cout << "Inventory is full. Cannot add item: " << item->getName() << std::endl;
		return item;
	}
	items.push_back(std::move(item));
	return nullptr;
}

std::unique_ptr<Item> Inventory::removeItem(std::unique_ptr<Item> item)
{
	auto it = std::find_if(items.begin(), items.end(), [&item](const std::unique_ptr<Item>& i) {
		return i.get() == item.get();
	});
	if (it != items.end())
	{
		std::unique_ptr<Item> removedItem = std::move(*it);
		items.erase(it);
		return removedItem;
	}
	std::cout << "Item not found in inventory." << std::endl;
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

const Item* Inventory::findItemByName(const std::string& name) const
{
	auto it = std::find_if(items.begin(), items.end(), [&name](const std::unique_ptr<Item>& item) {
		return item->getName() == name;
	});
	if (it != items.end())
	{
		return it->get();
	}
	return nullptr;
}
