#include <iostream>
#include "Item.h"
#include "Weapon.h"

int main()
{
	Weapon sword("Sword", "A sharp blade", 100, 5, 20, "Longsword");
	sword.displayInfo();

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

