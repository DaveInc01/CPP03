#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap :public ClapTrap{
public:
	ScavTrap ( void );
	ScavTrap ( std::string n );
	ScavTrap (const ScavTrap &other);
	void attack(std::string& target);
	void guardGate();
	~ScavTrap ();
};

#endif
