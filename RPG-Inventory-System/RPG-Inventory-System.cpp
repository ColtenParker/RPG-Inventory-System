#include <iostream>
#include "Item.h"
#include "Weapon.h"
#include "Character.h"
#include "Mage.h"
#include "Inventory.h"

int main()
{
	std::unique_ptr<Item> sword = std::make_unique<Weapon>("Sword", "A sharp blade", 100, 5, 20, "Longsword");
	std::unique_ptr<Item> axe = std::make_unique<Weapon>("Axe", "A heavy axe", 150, 10, 30, "Battleaxe");
	std::unique_ptr<Item> wand = std::make_unique<Weapon>("Wand", "A magical wand", 200, 2, 15, "Magic Wand");

	Mage mage("Gandalf");
	Mage mage2("Merlin");

	mage.DisplayStats();
	
	mage.DisplayInventory();
	wand = mage.AddItemToInventory(std::move(wand));
	sword = mage.AddItemToInventory(std::move(sword));
	axe = mage.AddItemToInventory(std::move(axe));
	mage.DisplayInventory();

	mage2.DisplayStats();
	mage2.DisplayInventory();

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

