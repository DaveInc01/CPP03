#include "includes/ScavTrap.hpp"

ScavTrap::ScavTrap ()
{
	this->name = "bot";
	this->health_p = 100;
	this->energy_p = 50;
	this->attack_dmg = 20;
	std::cout << "ScavTrap " << this->name << " was created" << std::endl;
}

ScavTrap::ScavTrap(std::string n)
{
	this->name = n;
	this->health_p = 100;
	this->energy_p = 50;
	this->attack_dmg = 20;
	std::cout << "ScavTrap " << this->name << " was created" << std::endl;
}

void ScavTrap::attack(std::string& target)
{
	if (this->health_p > 0 && this->energy_p > 0)
	{
		std::cout << "\x1b[31mScavTrap " << this->name << " attacks " << target << ",causing " << this->attack_dmg << " points of damage! \x1b[0m" << std::endl;
		this->energy_p -= 1;
	}
	else if (this->health_p <= 0)
	{
		std::cout << "\x1b[32;41mScavTrap " << this->name << " is alredy died \x1b[0m" << std::endl;
	}
	else{
		std::cout << "\x1b[32;41mScavTrap " << this->name << " not have enough energy points \x1b[0m" << std::endl;
	}
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->health_p > 0)
	{
		std::cout << "\x1b[31mScavTrap " << this->name << " takes " << amount << " points of damage 🗡 \x1b[0m " << std::endl;
		this->health_p -= amount;
	}
	else
	{
		std::cout << "\x1b[32;41mScavTrap " << this->name << " is alredy died \x1b[0m" << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount){
	if (this->energy_p > 0 && this->health_p > 0)
	{
		std::cout << "\x1b[32mScavTrap " << this->name << " repairs " << amount << " points of HP    ✚\x1b[0m" << std::endl;
		this->health_p += amount;
		energy_p -= 1;
	}
	else if (this->health_p <= 0)
	{
		std::cout << "\x1b[32;41mScavTrap " << this->name << " is alredy died \x1b[0m" << std::endl;
	}
	else{
		std::cout << "\x1b[32;41mScavTrap " << this->name << " not have enough energy points \x1b[0m" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "\x1b[33;46mScavTrap " << this->name << "  is now in Gate keeper mode.\x1b[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " was destroyed" << std::endl;
}
