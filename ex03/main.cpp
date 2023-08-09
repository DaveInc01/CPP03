#include "./includes/ClapTrap.hpp"
#include "./includes/ScavTrap.hpp"
#include "./includes/FragTrap.hpp"
#include "./includes/DiamondTrap.hpp"

int main ( void )
{
	ClapTrap batMan("Batman");
	DiamondTrap cap("CapAmerica");
	cap.attack (batMan.getName());
	cap.whoAmI();
	return 0;
}
