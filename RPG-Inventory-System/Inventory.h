#pragma once
#include <vector>
#include <memory>
#include "Item.h"

class Inventory
{
	std::vector<std::unique_ptr<Item>> items;

public:
	Inventory() = default;

	void addItem(std::unique_ptr<Item> item);
	void displayInventory() const;
};

