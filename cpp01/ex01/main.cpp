#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombies;
	int		i = 0;

	zombies = zombieHorde(10, "Name");
	while (i < 10)
	{
		zombies[i].announce();
		i++;
	}
	delete [] zombies;
	return (0);
}
