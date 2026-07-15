#pragma once
#include "Item.h"

class Weapon :
    public Item
{
	int damage;
	std::string weaponName;

public:
	Weapon(const std::string& name, const std::string& description, int value, int weight, int damage, const std::string& weaponName);

	int getDamage() const;
	std::string getWeaponName() const;

	void displayInfo() const override;
};

