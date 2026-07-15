#include "Weapon.h"
#include <iostream>

Weapon::Weapon(const std::string& name, const std::string& description, int value, int weight, int damage, const std::string& weaponName)
	: Item(name, description, ItemType::Weapon, value, weight), damage(damage), weaponName(weaponName)
{
}

void Weapon::displayInfo() const
{
	Item::displayInfo();
	std::cout << "Damage: " << damage << std::endl;
	std::cout << "Weapon Name: " << weaponName << std::endl;
}
