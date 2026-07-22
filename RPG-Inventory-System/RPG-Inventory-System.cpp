#include <iostream>
#include "Item.h"
#include "Weapon.h"
#include "Armor.h"
#include "Consumable.h"
#include "Character.h"
#include "Mage.h"
#include "Inventory.h"

int main()
{
	// Create Weapon items
	std::unique_ptr<Item> sword = std::make_unique<Weapon>("Sword", "A sharp blade", 100, 5, 20, "Longsword");
	std::unique_ptr<Item> axe = std::make_unique<Weapon>("Axe", "A heavy axe", 150, 10, 30, "Battleaxe");
	std::unique_ptr<Item> wand = std::make_unique<Weapon>("Wand", "A magical wand", 200, 2, 15, "Magic Wand");

	//Create Armor items
	std::unique_ptr<Item> helmet = std::make_unique<Armor>("Helmet", "A sturdy helmet", 50, 3, 5, "Plate", "Head");
	std::unique_ptr<Item> chest = std::make_unique<Armor>("Chest", "A sturdy chest piece", 100, 10, 10, "Plate", "Chest");
	std::unique_ptr<Item> boots = std::make_unique<Armor>("Boots", "A sturdy pair of boots", 30, 2, 2, "Plate", "Feet");

	//Create Consumable items
	std::unique_ptr<Item> healthPotion = std::make_unique<Consumable>("Health Potion", "Restores health", 25, 1, 50, 0, "Health");
	std::unique_ptr<Item> manaPotion = std::make_unique<Consumable>("Mana Potion", "Restores mana", 25, 1, 0, 30, "Mana");

	// Create mage character
	Mage mage("Gandalf");

	// Display stats and inventory
	mage.DisplayStats();
	mage.DisplayInventory();
	wand = mage.AddItemToInventory(std::move(wand));
	helmet = mage.AddItemToInventory(std::move(helmet));
	chest = mage.AddItemToInventory(std::move(chest));
	boots = mage.AddItemToInventory(std::move(boots));
	healthPotion = mage.AddItemToInventory(std::move(healthPotion));
	mage.DisplayInventory();

	// Find item test
	const Item* foundItem = mage.findItemByName("Wand");
	if (foundItem)
	{
		foundItem->displayInfo();
	}
	else {
		std::cout << "Item not found." << std::endl;
	}

	// Remove item test
	mage.RemoveItemFromInventory(0);
	mage.DisplayInventory();
	axe = mage.AddItemToInventory(std::move(axe));
	mage.DisplayInventory();

	//Potion test
	mage.TakeDamage(60);
	mage.DisplayStats();
	mage.useItem(3);
	mage.DisplayStats();
	mage.DisplayInventory();

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

