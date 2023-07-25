#include "./includes/ClapTrap.hpp"
#include "./includes/ScavTrap.hpp"
#include "./includes/FragTrap.hpp"
#include "./includes/DiamondTrap.hpp"

int main ( void )
{
	// ClapTrap batMan("Batman");
	// ScavTrap spiderMan("SpiderMan");
	FragTrap thor("Thor");
	DiamondTrap cap("CapAmerica");
	cap.attack (cap.getName());
	// cap.whoAmI();
	// cap.whoAmI();
	// batMan.attack(spiderMan.getName());
	// spiderMan.takeDamage(batMan.getAttackDmg());
	// thor.highFivesGuys();
	// batMan.attack(thor.getName());
	// thor.takeDamage(batMan.getAttackDmg());
	// spiderMan.guardGate();
	// spiderMan.attack(batMan.getName());
	// batMan.takeDamage(spiderMan.getAttackDmg());
	// batMan.beRepaired(9);
	return 0;
}
