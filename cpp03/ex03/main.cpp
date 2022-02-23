#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	Morti("Morti");
	std::cout << std::endl;

	Morti.whoAmI();
	std::cout << std::endl;

	{
		DiamondTrap Rick("Rick");
		DiamondTrap Kate("Kate");
		std::cout << std::endl;

		Rick.whoAmI();
		Kate.whoAmI();
		Kate.highFivesGuys();
		std::cout << std::endl;

		Rick.attack("Kate");
		Kate.takeDamage(Rick.getDamage());
		std::cout << std::endl;

		Rick.attack("Kate");
		Kate.takeDamage(Rick.getDamage());
		std::cout << std::endl;

		Rick.guardGuate();
		std::cout << std::endl;
	}
	std::cout << std::endl;

	DiamondTrap Sam;
	std::cout << std::endl;

	Sam.whoAmI();
	std::cout << std::endl;

	Sam = Morti;
	std::cout << std::endl;

	Sam.whoAmI();
	std::cout << std::endl;
	return (0);
}
