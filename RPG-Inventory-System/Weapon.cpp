#include "Weapon.h"
#include <iostream>

Weapon::Weapon(const std::string& name, const std::string& description, int value, int weight, int damageBonus, const std::string& weaponType)
	: Item(name, description, ItemType::Weapon, value, weight), damageBonus(damageBonus), weaponType(weaponType)
{
}

int Weapon::getDamageBonus() const
{
	return damageBonus;
}

std::string Weapon::getWeaponType() const
{
	return weaponType;
}

void Weapon::displayInfo() const
{
	Item::displayInfo();
	std::cout << "Damage Bonus: " << damageBonus << std::endl;
	std::cout << "Weapon Type: " << weaponType << std::endl;
}
