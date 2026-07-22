#include "Item.h"
#include <iostream>

Item::Item(const std::string& name, const std::string& description, ItemType type, int value, int weight)
	: name(name), description(description), type(type), value(value), weight(weight)
{
}

std::string Item::getName() const
{
	return name;
}

ItemType Item::getType() const
{
	return type;
}

int Item::getValue() const
{
	return value;
}

int Item::getWeight() const
{
	return weight;
}

bool Item::Use(Character& character)
{
	return false;
}

void Item::displayInfo() const
{
	std::string temp;

	switch (type)
	{
	case ItemType::Weapon:
		temp = "Weapon";
		break;
	case ItemType::Armor:
		temp = "Armor";
		break;
	case ItemType::Potion:
		temp = "Potion";
		break;
	default:
		std::cout << "Unknown" << std::endl;
		break;
	}

	std::cout << "Name: " << name << std::endl;
	std::cout << "Description: " << description << std::endl;
	std::cout << "Type: " << temp << std::endl;
	std::cout << "Value: " << value << "g" << std::endl;
	std::cout << "Weight: " << weight << "kg" << std::endl;
}