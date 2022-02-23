#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("none_clap_name"), ScavTrap("none"), FragTrap("none"), _name("none")
{
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	_energy_points = 50;
	std::cout << "New DiamondTrap - " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name)
{
	std::cout << "DiamondTrap copy constructor (" << _name << ") called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED;
	std::cout << "DiamondTrap " << _name << " is off" << std::endl;
	std::cout << RESET;
}

DiamondTrap	&DiamondTrap::operator =(DiamondTrap const &other)
{
	ScavTrap::operator =(other);
	ScavTrap::operator =(other);
	_name = other._name;
	std::cout << "DiamondTrap operator = (" << _name << ") called" << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << CYAN;
	std::cout << "This DiamondTrap name is " << _name << " and this ClapTrap name is " << ClapTrap::_name << std::endl;
	std::cout << RESET;
}
