#include "includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	ClapTrap::name = ClapTrap::name + "_clap_name";
	this->name = ClapTrap::name;
	this->health_p = FragTrap::health_p;
	this->energy_p = ScavTrap::energy_p;
	this->attack_dmg = FragTrap::attack_dmg;
	std::cout << "DiamondTrap " << this->name << " was created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string n)
{
	this->name = n;
	ClapTrap::name = n + "_clap_name";
	this->health_p = FragTrap::health_p;
	this->energy_p = ScavTrap::energy_p;
	this->attack_dmg = FragTrap::attack_dmg;
	std::cout << "DiamondTrap " << this->name << " was created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	this->health_p = other.health_p;
	this->energy_p = other.energy_p;
	this->attack_dmg = other.attack_dmg;
	this->name = other.name;
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

void DiamondTrap::attack(std::string& target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap's name is " << this->name << " and my hommie ClapTrap's name is " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << this->name << " was destroyed" << std::endl;
}
