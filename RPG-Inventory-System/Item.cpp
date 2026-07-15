#include "Item.h"
#include <iostream>

Item::Item(const std::string& name, const std::string& description, const std::string& type, int value, int weight) : name(name), description(description), type(type), value(value), weight(weight)
{
}

std::string Item::getName() const
{
	return name;
}

std::string Item::getType() const
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

void Item::displayInfo() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Description: " << description << std::endl;
	std::cout << "Type: " << type << std::endl;
	std::cout << "Value: " << value << std::endl;
	std::cout << "Weight: " << weight << std::endl;
}