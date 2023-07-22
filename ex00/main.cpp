#include "./includes/ClapTrap.hpp"

int main ( void )
{
	ClapTrap batMan("Batman");
	ClapTrap superMan("SuperMan");
	batMan.attack("SuperMan");
	superMan.takeDamage(5);
	superMan.beRepaired(3);
	superMan.attack("Batman");
	batMan.takeDamage(2);
	superMan.takeDamage(10);
	superMan.attack("bich");
}
