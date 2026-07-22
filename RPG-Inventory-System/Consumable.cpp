#include "Consumable.h"
#include <iostream>

Consumable::Consumable(const std::string& name, const std::string& description, int value, int weight, int restoreAmount, const std::string& consumableType) :
	Item(name, description, ItemType::Potion, value, weight),
	restoreAmount(restoreAmount),
	consumableType(consumableType)
{
}

int Consumable::getRestoreAmount() const
{
	return restoreAmount;
}

std::string Consumable::getConsumableType() const
{
	return consumableType;
}

void Consumable::displayInfo() const
{
	Item::displayInfo();
	std::cout << "Restore Amount: " << restoreAmount << std::endl;
	std::cout << "Consumable Type: " << consumableType << std::endl;
}
