#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	Kate("Kate");
	ScavTrap	Rick("Rick");
	ClapTrap	Morti("Morti");
	std::cout << std::endl;

	Morti.attack("Kate");
	Kate.takeDamage(Morti.getDamage());
	std::cout << std::endl;

	Kate.attack("Rick");
	Rick.takeDamage(Kate.getDamage());
	std::cout << std::endl;

	Rick.attack("Kate");
	Kate.takeDamage(Rick.getDamage());
	std::cout << std::endl;

	Kate.attack("Rick");
	Rick.takeDamage(Kate.getDamage());
	std::cout << std::endl;

	Rick.attack("Kate");
	Kate.takeDamage(Rick.getDamage());
	std::cout << std::endl;

	Kate.beRepaired(5);
	std::cout << std::endl;

	Rick.guardGuate();
	std::cout << std::endl;

	return (0);
}
