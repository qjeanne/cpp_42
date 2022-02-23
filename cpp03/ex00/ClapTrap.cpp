#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "New player - " << _name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Player " << _name << " is out of the game" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other) : _name(other._name), _hitpoints(other._hitpoints), _energy_points(other._energy_points), _attack_damage(other._attack_damage)
{
	std::cout << "Player " << _name << " was copied" << std::endl;
}

ClapTrap	&ClapTrap::operator =(ClapTrap const &other)
{
	_name = other._name;
	_hitpoints = other._hitpoints;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
	std::cout << "ClapTrap operator = (" << _name << ") called" << std::endl;
	return (*this);
}

void		ClapTrap::attack(std::string const &target)
{
	if (_energy_points > 0 && _hitpoints > 0)
	{
		_hitpoints--;
		std::cout << GREEN;
		std::cout << _name << " attack " << target << ", causing " << getDamage() << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << RED;
		std::cout << _name << " cannot attack" << std::endl;
	}
	std::cout << RESET;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << RED;
	if (_energy_points > 0)
	{
		std::cout << _name << " has taken " << amount << " points of damage" << std::endl;
		if (_energy_points - amount < 0)
			_energy_points = 0;
		else
			_energy_points -= amount;
		if (_energy_points <= 0)
			std::cout << _name << " died" << std::endl;
		else
		{
			std::cout << RESET;
			std::cout << _name << "'s energy points now is " << _energy_points << std::endl;
		}
	}
	else
		std::cout << _name << " is already dead" << std::endl;
	std::cout << RESET;
}

unsigned int	ClapTrap::getDamage()
{
	if (_energy_points > 0 && _hitpoints > 0)
		return (_attack_damage + 1);
	return (0);
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << CYAN;
	_energy_points += amount;
	std::cout << _name << " has been repaired and has " << _energy_points << " energy points now" << std::endl;
	std::cout << RESET;
}
