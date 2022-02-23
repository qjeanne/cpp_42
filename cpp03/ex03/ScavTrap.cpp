#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _guard_mode(false)
{
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << _name << " activates ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap of " << _name << " is off" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other), _guard_mode(other._guard_mode)
{
	std::cout << "ScavTrap player " << _name << " was copied" << std::endl;
}

ScavTrap	&ScavTrap::operator =(ScavTrap const &other)
{
	ClapTrap::operator =(other);
	_guard_mode = other._guard_mode;
	std::cout << "ScavTrap operator = (" << _name << ") called" << std::endl;
	return (*this);
}

void		ScavTrap::attack(std::string const &target)
{
	if (_energy_points > 0 && _hitpoints > 0)
	{
		_hitpoints--;
		std::cout << GREEN;
		std::cout << _name << " attack " << target << " by ScavTrap, causing " << getDamage() << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << RED;
		std::cout << _name << " cannot attack" << std::endl;
	}
	std::cout << RESET;
}

void	ScavTrap::guardGuate(void)
{
	if (_energy_points)
	{
		std::cout << "ScavTrap " << _name << " switch to guard mode" << std::endl;
		_guard_mode = true;
	}
	else
		std::cout << "ScavTrap " << _name << " could not switch to guard mode bacause he is dead" << std::endl;
	std::cout << RESET;
}
