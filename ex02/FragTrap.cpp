#include "includes/FragTrap.hpp"

FragTrap::FragTrap ()
{
	this->name = "bot";
	this->health_p = 100;
	this->energy_p = 100;
	this->attack_dmg = 30;
	std::cout << "FragTrap " << this->name << " was created" << std::endl;
}

FragTrap::FragTrap(std::string n)
{
	this->name = n;
	this->health_p = 100;
	this->energy_p = 100;
	this->attack_dmg = 30;
	std::cout << "FragTrap " << this->name << " was created" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << ": Guys, get me a high fives 🖐" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " was destroyed" << std::endl;
}
