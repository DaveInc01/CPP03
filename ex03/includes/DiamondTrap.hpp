#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
	DiamondTrap ();
	DiamondTrap ( std::string n );
	DiamondTrap (const DiamondTrap &other);
	void attack(std::string& target);
	void whoAmI( void );
	~DiamondTrap ();
private:
	std::string name;
};

#endif
