#pragma once
#include <vector>
#include <memory>
#include "Item.h"

class Inventory
{
	std::vector<std::unique_ptr<Item>> items;
	std::size_t maxSize;
	std::size_t itemCount;

public:
	Inventory(std::size_t maxSize = 10, std::size_t itemCount = 0);

	std::size_t getMaxSize() const;
	std::size_t getItemCount() const;

	void addItem(std::unique_ptr<Item> item);
	void displayInventory() const;
};

