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

void FragTrap::attack(std::string& target)
{
	if (this->health_p > 0 && this->energy_p > 0)
	{
		std::cout << "\x1b[31mFragTrap " << this->name << " attacks " << target << ",causing " << this->attack_dmg << " points of damage! \x1b[0m" << std::endl;
		this->energy_p -= 1;
	}
	else if (this->health_p <= 0)
	{
		std::cout << "\x1b[32;41mFragTrap " << this->name << " is alredy died \x1b[0m" << std::endl;
	}
	else{
		std::cout << "\x1b[32;41mFragTrap " << this->name << " not have enough energy points \x1b[0m" << std::endl;
	}
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (this->health_p > 0)
	{
		std::cout << "\x1b[31mFragTrap " << this->name << " takes " << amount << " points of damage 🗡 \x1b[0m " << std::endl;
		this->health_p -= amount;
	}
	else
	{
		std::cout << "\x1b[32;41mFragTrap " << this->name << " is alredy died \x1b[0m" << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount){
	if (this->energy_p > 0 && this->health_p > 0)
	{
		std::cout << "\x1b[32mFragTrap " << this->name << " repairs " << amount << " points of HP    ✚\x1b[0m" << std::endl;
		this->health_p += amount;
		energy_p -= 1;
	}
	else if (this->health_p <= 0)
	{
		std::cout << "\x1b[32;41mFragTrap " << this->name << " is alredy died \x1b[0m" << std::endl;
	}
	else{
		std::cout << "\x1b[32;41mFragTrap " << this->name << " not have enough energy points \x1b[0m" << std::endl;
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << ": Guys, get me a high fives 🖐" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " was destroyed" << std::endl;
}
