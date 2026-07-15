#pragma once
#include <string>
#include "ItemType.h"

class Item
{
protected:
	std::string name;
	std::string description;
	ItemType type;
	int value;
	int weight;

public:
	Item(const std::string& name, const std::string& description, ItemType type, int value, int weight);

	std::string getName() const;
	ItemType getType() const;
	int getValue() const;
	int getWeight() const;

	virtual void displayInfo() const;

	virtual ~Item() = default;
};

