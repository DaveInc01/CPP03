#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap :public ClapTrap{
public:
	FragTrap ( void );
	FragTrap ( std::string n );
	FragTrap (const FragTrap &other);
	void attack(std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void highFivesGuys(void);
	~FragTrap ();
};

#endif
