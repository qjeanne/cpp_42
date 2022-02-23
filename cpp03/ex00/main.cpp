#include "ClapTrap.hpp"

int main()
{
	ClapTrap	John("John");
	ClapTrap	Kate("Kate");
	ClapTrap	Rick("Rick");
	std::cout << std::endl;

	John.attack("Kate");
	Kate.takeDamage(John.getDamage());
	std::cout << std::endl;

	Kate.attack("John");
	John.takeDamage(Kate.getDamage());
	std::cout << std::endl;

	Rick.attack("Kate");
	Kate.takeDamage(Rick.getDamage());
	std::cout << std::endl;

	Rick.attack("John");
	John.takeDamage(Rick.getDamage());
	std::cout << std::endl;

	John.beRepaired(1);
	std::cout << std::endl;

	return (0);
}
