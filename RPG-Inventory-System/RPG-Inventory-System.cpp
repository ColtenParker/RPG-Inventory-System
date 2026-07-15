#include <iostream>
#include "Item.h"
#include "Weapon.h"
#include "Character.h"
#include "Mage.h"
#include "Inventory.h"

int main()
{
	auto sword = std::make_unique<Weapon>("Sword", "A sharp blade", 100, 5, 20, "Longsword");
	auto axe = std::make_unique<Weapon>("Axe", "A heavy axe", 150, 10, 30, "Battleaxe");
	auto wand = std::make_unique<Weapon>("Wand", "A magical wand", 200, 2, 15, "Magic Wand");

	Mage mage("Gandalf");
	Mage mage2("Merlin");

	mage.DisplayStats();
	
	mage.DisplayInventory();
	mage.AddItemToInventory(std::move(wand));
	mage.DisplayInventory();

	mage2.DisplayStats();
	mage2.DisplayInventory();

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

