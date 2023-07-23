#include "./includes/ClapTrap.hpp"
#include "./includes/ScavTrap.hpp"

int main ( void )
{
	ClapTrap batMan("Batman");
	ScavTrap spiderMan("SpiderMan");
	batMan.attack(spiderMan.getName());
	spiderMan.takeDamage(batMan.getAttackDmg());
	spiderMan.guardGate();
	spiderMan.attack(batMan.getName());
	batMan.takeDamage(spiderMan.getAttackDmg());
	batMan.beRepaired(9);
	return 0;
}
