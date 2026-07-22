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
	std::unique_ptr<Item> healthPotion = std::make_unique<Consumable>("Health Potion", "Restores health", 25, 1, 50, "Health");

	// Create 2 mage characters
	Mage mage("Gandalf");
	Mage mage2("Merlin");

	// Display stats and inventory
	mage.DisplayStats();
	mage.DisplayInventory();
	wand = mage.AddItemToInventory(std::move(wand));
	sword = mage.AddItemToInventory(std::move(sword));
	axe = mage.AddItemToInventory(std::move(axe));
	mage.DisplayInventory();
	mage2.DisplayInventory();

	// Find item test
	const Item* foundItem = mage.findItemByName("Sword");
	if (foundItem)
	{
		foundItem->displayInfo();
	}

	// Remove item test
	mage.RemoveItemFromInventory(0);
	mage.DisplayInventory();
	axe = mage.AddItemToInventory(std::move(axe));
	mage.DisplayInventory();

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

