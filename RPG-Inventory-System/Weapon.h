#pragma once
#include "Item.h"

class Weapon :
    public Item
{
	int damageBonus;
	std::string weaponType;

public:
	Weapon(const std::string& name, const std::string& description, int value, int weight, int damageBonus, const std::string& weaponType);

	int getDamageBonus() const;
	std::string getWeaponType() const;

	void displayInfo() const override;
};

