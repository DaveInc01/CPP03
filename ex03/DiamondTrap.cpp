#include "includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap ()
{
	this->name = "bot";
	this->health_p = 100;
	this->energy_p = 50;
	this->attack_dmg = 30;
	std::cout << "DiamondTrap " << this->name << " was created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string n)
{}
	this->name = n;
	this->health_p = 100;
	this->energy_p = 50;
	this->attack_dmg = 30;
	std::cout << "DiamondTrap " << this->name << " was created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	*this = other;
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

void DiamondTrap::attack(std::string& target)
{
	if (this->health_p > 0 && this->energy_p > 0)
	{
		std::cout << "\x1b[31mDiamondTrap " << this->name << " attacks " << target << ",causing " << this->attack_dmg << " points of damage! \x1b[0m" << std::endl;
		this->energy_p -= 1;
	}
	else if (this->health_p <= 0)
	{
		std::cout << "\x1b[32;41mDiamondTrap " << this->name << " is alredy died \x1b[0m" << std::endl;
	}
	else{
		std::cout << "\x1b[32;41mDiamondTrap " << this->name << " not have enough energy points \x1b[0m" << std::endl;
	}
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	if (this->health_p > 0)
	{
		std::cout << "\x1b[31mDiamondTrap " << this->name << " takes " << amount << " points of damage 🗡 \x1b[0m " << std::endl;
		this->health_p -= amount;
	}
	else
	{
		std::cout << "\x1b[32;41mDiamondTrap " << this->name << " is alredy died \x1b[0m" << std::endl;
	}
}

void DiamondTrap::beRepaired(unsigned int amount){
	if (this->energy_p > 0 && this->health_p > 0)
	{
		std::cout << "\x1b[32mDiamondTrap " << this->name << " repairs " << amount << " points of HP    ✚\x1b[0m" << std::endl;
		this->health_p += amount;
		energy_p -= 1;
	}
	else if (this->health_p <= 0)
	{
		std::cout << "\x1b[32;41mDiamondTrap " << this->name << " is alredy died \x1b[0m" << std::endl;
	}
	else{
		std::cout << "\x1b[32;41mDiamondTrap " << this->name << " not have enough energy points \x1b[0m" << std::endl;
	}
}

void DiamondTrap::guardGate()
{
	std::cout << "\x1b[33;46mDiamondTrap " << this->name << "  is now in Gate keeper mode.\x1b[0m" << std::endl;
}

void DiamondTrap::highFivesGuys(void)
{
	std::cout << "DiamondTrap " << this->name << ": Guys, get me a high fives 🖐" << std::endl;
}
