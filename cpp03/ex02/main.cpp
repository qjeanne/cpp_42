#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	Kate("Kate");
	ScavTrap	Rick("Rick");
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

	Rick.beRepaired(20);
	Rick.guardGuate();
	std::cout << std::endl;

	Kate.highFivesGuys();
	std::cout << std::endl;

	return (0);
}
