#include <iostream>
#include "Character.h"


Character::Character(const std::string& name, int maxHealth, Stats stats) : name(name), maxHealth(maxHealth), stats(stats), currentHealth(maxHealth)
{
}

void Character::DisplayStats() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Health: " << currentHealth << "/" << maxHealth << std::endl << std::endl;
	std::cout << "Stats " << std::endl;
	std::cout << "Strength: " << stats.strength << std::endl;
	std::cout << "Dexterity: " << stats.dexterity << std::endl;
	std::cout << "Intelligence: " << stats.intelligence << std::endl;
}

void Character::TakeDamage(int damage)
{
	if (currentHealth <= 0)
	{
		std::cout << name << " is already dead and cannot take more damage." << std::endl;
		return;
	}
	else if (damage <= 0)
	{
		std::cout << "Damage must be more than 0." << std::endl;
		return;
	}

	currentHealth -= damage;

	if (currentHealth < 0)
	{
		currentHealth = 0;
	}


}

void Character::Heal(int amount)
{

	if (currentHealth <= 0)
	{
		std::cout << name << " is dead and cannot be healed." << std::endl;
		return;
	}
	else if (amount <= 0)
	{
		std::cout << "Heal amount must be more than 0." << std::endl;
		return;
	}

	currentHealth += amount;

	if (currentHealth > maxHealth)
	{
		currentHealth = maxHealth;
	}
}

bool Character::IsAlive() const
{
	return currentHealth > 0;
}

void Character::AddItemToInventory(std::unique_ptr<Item> item)
{
	inventory.addItem(std::move(item));
}

void Character::DisplayInventory() const
{
	inventory.displayInventory();
}
