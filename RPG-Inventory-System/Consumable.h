#pragma once
#include "Item.h"

class Consumable :
    public Item
{
	int healthRestoreAmount;
	int manaRestoreAmount;
	std::string consumableType;

public:
	Consumable(const std::string& name, const std::string& description, int value, int weight, int healthRestoreAmount, int manaRestoreAmount, const std::string& consumableType);

	int getHealthRestoreAmount() const;
	int getManaRestoreAmount() const;
	std::string getConsumableType() const;

	bool Use(Character& character) override;
	
	void displayInfo() const override;
};

