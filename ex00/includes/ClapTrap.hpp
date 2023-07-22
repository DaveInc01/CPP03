#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <stdlib.h>
class ClapTrap{
public:
	ClapTrap ( void );
	ClapTrap ( std::string n );
	ClapTrap (const ClapTrap &other);
	void operator=(const ClapTrap &other);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	~ClapTrap ();
private:
	std::string name;
	int			health_p;
	int			energy_p;
	int			attack_dmg;
};

#endif
