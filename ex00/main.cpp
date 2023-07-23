#include "./includes/ClapTrap.hpp"

int main ( void )
{
	ClapTrap batMan("Batman");
	ClapTrap superMan("Superman");
	superMan.attack(batMan.getName());
	batMan.takeDamage(batMan.getAttackDmg());
	superMan.attack("Batman");
	batMan.takeDamage(batMan.getAttackDmg());
	batMan.beRepaired(9);
	batMan.attack(superMan.getName());
	superMan.takeDamage(superMan.getAttackDmg());
	superMan.beRepaired(3);
	return 0;
}
