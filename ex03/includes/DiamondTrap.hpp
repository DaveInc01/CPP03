#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap :public ClapTrap, public ScavTrap {
public:
	DiamondTrap ( void );
	DiamondTrap ( std::string n );
	DiamondTrap (const DiamondTrap &other);
	void attack(std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
	void highFivesGuys(void);
	~DiamondTrap ();
private:
	std::string name;
}
