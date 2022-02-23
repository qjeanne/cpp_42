#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

Zombie::~Zombie(void)
{
	std::cout << _name << " is died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << _name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::Name(std::string name)
{
	_name = name;
}
