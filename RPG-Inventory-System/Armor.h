#pragma once
#include "Item.h"
class Armor :
    public Item
{
	int damageReduction;
	std::string ArmorType;
	std::string ArmorSlot;

public:
	Armor(const std::string& name, const std::string& description, int value, int weight, int damageReduction, const std::string& ArmorType, const std::string& ArmorSlot);

	int getDamageReduction() const;
	std::string getArmorType() const;
	std::string getArmorSlot() const;

	void displayInfo() const override;
};

