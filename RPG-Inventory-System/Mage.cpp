#include "Mage.h"
#include <iostream>

Mage::Mage(const std::string& name) : Character(name, 80, Stats{ 8, 12, 16 })
{
}

void Mage::Attack()
{
	std::cout << name << " casts fireball!" << std::endl;
}