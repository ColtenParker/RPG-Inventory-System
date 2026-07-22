#include "Consumable.h"
#include "Character.h"
#include <iostream>

Consumable::Consumable(const std::string& name, const std::string& description, int value, int weight, int healthRestoreAmount, int manaRestoreAmount, const std::string& consumableType) :
	Item(name, description, ItemType::Potion, value, weight),
	healthRestoreAmount(healthRestoreAmount),
	manaRestoreAmount(manaRestoreAmount),
	consumableType(consumableType)
{
}

int Consumable::getHealthRestoreAmount() const
{
	return healthRestoreAmount;
}

int Consumable::getManaRestoreAmount() const
{
	return manaRestoreAmount;
}

std::string Consumable::getConsumableType() const
{
	return consumableType;
}

bool Consumable::Use(Character& character)
{
	if (!character.Heal(healthRestoreAmount))
	{
		return false;
	}
	return true;
}

void Consumable::displayInfo() const
{
	Item::displayInfo();
	std::cout << "Health Restore Amount: " << healthRestoreAmount << std::endl;
	std::cout << "Mana Restore Amount: " << manaRestoreAmount << std::endl;
	std::cout << "Consumable Type: " << consumableType << std::endl;
}
