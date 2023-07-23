#include "includes/ClapTrap.hpp"

ClapTrap::ClapTrap ( void ){
	this->name = "bot";
	this->health_p = 10;
	this->energy_p = 10;
	this->attack_dmg = 0;
	std::cout << "ClapTrap " << this->name << " was created" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &other )
{
	this->health_p = other.health_p;
	this->energy_p = other.energy_p;
	this->attack_dmg = other.attack_dmg;
	this->name = other.name;
	std::cout << "ClapTrap " << this->name << " was created" << std::endl;
}

ClapTrap::ClapTrap( std::string n )
{
	this->name = n;
	this->health_p = 10;
	this->energy_p = 10;
	this->attack_dmg = 0;
	std::cout << "ClapTrap " << this->name << " was created" << std::endl;
}

void ClapTrap::operator=( const ClapTrap &other ){
	this->name = other.name;
	this->health_p = other.health_p;
	this->energy_p = other.energy_p;
	this->attack_dmg = other.attack_dmg;
}

//getters and setters

void ClapTrap::setName(std::string n)
{
	this->name = n;
}

std::string &ClapTrap::getName( void )
{
	return this->name;
}

int ClapTrap::getAttackDmg ( void )
{
	return (this->attack_dmg);
}

void ClapTrap::setAttackDmg ( int dmg)
{
	this->attack_dmg = dmg;
}

void ClapTrap::attack(const std::string& target){
	if (this->health_p > 0 && this->energy_p > 0)
	{
		std::cout << "\x1b[31mClapTrap " << this->name << " attacks " << target << ",causing " << this->attack_dmg << " points of damage! \x1b[0m" << std::endl;
		this->energy_p -= 1;
	}
	else if (this->health_p <= 0)
	{
		std::cout << "\x1b[32;41mClapTrap " << this->name << " is alredy died \x1b[0m" << std::endl;
	}
	else{
		std::cout << "\x1b[32;41mClapTrap " << this->name << " not have enough energy points \x1b[0m" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->health_p > 0)
	{
		std::cout << "\x1b[31mClapTrap " << this->name << " takes " << amount << " points of damage 🗡 \x1b[0m " << std::endl;
		this->health_p -= amount;
	}
	else
	{
		std::cout << "\x1b[32;41mClapTrap " << this->name << " is alredy died \x1b[0m" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->energy_p > 0 && this->health_p > 0)
	{
		std::cout << "\x1b[32mClapTrap " << this->name << " repairs " << amount << " points of HP    ✚\x1b[0m" << std::endl;
		this->health_p += amount;
		energy_p -= 1;
	}
	else if (this->health_p <= 0)
	{
		std::cout << "\x1b[32;41mClapTrap " << this->name << " is alredy died \x1b[0m" << std::endl;
	}
	else{
		std::cout << "\x1b[32;41mClapTrap " << this->name << " not have enough energy points \x1b[0m" << std::endl;
	}
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << this->name << " was destroyed" << std::endl;
}
