#pragma once
#include "Stats.h"
#include "Inventory.h"
#include <string>

class Character
{
protected:
	std::string name;
	int maxHealth;
	Stats stats;
	int currentHealth;
	Inventory inventory;

public:
	Character(const std::string& name, int maxHealth, Stats stats);

	virtual void Attack() = 0;
	virtual void DisplayStats() const;

	void TakeDamage(int damage);
	bool Heal(int amount);
	bool IsAlive() const;

	std::unique_ptr<Item> AddItemToInventory(std::unique_ptr<Item> item);
	std::unique_ptr<Item> RemoveItemFromInventory(std::unique_ptr<Item> item);
	void DisplayInventory() const;
	const Item* findItemByName(const std::string& name) const;
	void useConsumable(const Item* item);

	virtual ~Character() = default;
};


