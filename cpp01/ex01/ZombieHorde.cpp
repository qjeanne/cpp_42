#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie	*zombies;
	int		i = 0;

	zombies = new Zombie[N];
	while (i < N)
	{
		zombies[i].Name(name + std::to_string(i + 1));
		i++;
	}
	return (zombies);
}
