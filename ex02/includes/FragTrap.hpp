#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap :public ClapTrap{
public:
	FragTrap ( void );
	FragTrap ( std::string n );
	FragTrap (const FragTrap &other);
	void highFivesGuys(void);
	~FragTrap ();
};

#endif
