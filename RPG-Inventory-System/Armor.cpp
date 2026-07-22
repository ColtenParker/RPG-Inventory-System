#include "Armor.h"
#include <iostream>

Armor::Armor(const std::string& name, const std::string& description, int value, int weight, int damageReduction, const std::string& ArmorType, const std::string& ArmorSlot) :
	Item(name, description, ItemType::Armor, value, weight),
	damageReduction(damageReduction),
	ArmorType(ArmorType),
	ArmorSlot(ArmorSlot)
{
}

int Armor::getDamageReduction() const
{
	return damageReduction;
}

std::string Armor::getArmorType() const
{
	return ArmorType;
}

std::string Armor::getArmorSlot() const
{
	return ArmorSlot;
}

void Armor::displayInfo() const
{
	Item::displayInfo();
	std::cout << "Damage Reduction: " << damageReduction << std::endl;
	std::cout << "Armor Type: " << ArmorType << std::endl;
	std::cout << "Armor Slot: " << ArmorSlot << std::endl;
}
