#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << _name << " activates FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
	std::cout << "FragTrap copy constructor of " << _name  << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap of " << _name << " is off" << std::endl;
}

FragTrap &FragTrap::operator =(FragTrap const &other)
{
	ClapTrap::operator =(other);
	std::cout << "FragTrap operator = (" << _name << ") called" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " positive high fives request" << std::endl;
	std::cout << RESET;
}