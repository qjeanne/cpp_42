#include "Zombie.hpp"

int main()
{
	Zombie	*Name1;
	Zombie	*Name2;

	Name1 = newZombie("Name1");
	Name2 = newZombie("Name2");
	randomChump("Name3");
	Name1->announce();
	Name2->announce();
	delete Name1;
	delete Name2;
	return 0;
}
