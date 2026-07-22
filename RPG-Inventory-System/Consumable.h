#pragma once
#include "Item.h"
class Consumable :
    public Item
{
	int restoreAmount;
	std::string consumableType;

public:
	Consumable(const std::string& name, const std::string& description, int value, int weight, int restoreAmount, const std::string& consumableType);

	int getRestoreAmount() const;
	std::string getConsumableType() const;
	
	void displayInfo() const override;
};

