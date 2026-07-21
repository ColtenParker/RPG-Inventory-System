#pragma once
#include <vector>
#include <memory>
#include "Item.h"

class Inventory
{
	std::vector<std::unique_ptr<Item>> items;
	std::size_t maxSize;

public:
	Inventory(std::size_t maxSize = 2); //temporary default maxSize set to 2 for testing purposes

	std::size_t getMaxSize() const;

	std::unique_ptr<Item> addItem(std::unique_ptr<Item> item);
	void displayInventory() const;

	const Item* findItemByName(const std::string& name) const;
};

