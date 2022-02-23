#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name)
{
	int		idx = 0;

	_name = name;
	while (idx < 4)
		_inventory[idx++] = NULL;
	std::cout << "Character default constructor called - " << _name << std::endl;
}

Character::~Character()
{
	std::cout << "Character default destructor called - " << _name << std::endl;
}

Character::Character(Character const &other) : ICharacter(other), _name(other._name)
{
	int		idx = 0;

	while (idx < 4)
	{
		_inventory[idx] = other._inventory[idx];
		idx++;
	}
	std::cout << "Character copy constructor called - " << _name << std::endl;
}

Character &Character::operator =(Character const &other)
{
	int		idx = 0;

	_name = other._name;
	while (idx < 4)
	{
		delete _inventory[idx];
		_inventory[idx] = other._inventory[idx];
		idx++;
	}
	std::cout << "Character operator = called - " << _name << std::endl;
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	int		idx = 0;

	while (idx < 4 && _inventory[idx] != NULL)
		idx++;
	if (idx < 4)
		_inventory[idx] = m;
	std::cout << _name << " equips the " << m->getType() << " in " << idx + 1 << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
		_inventory[idx]->use(target);
}

AMateria **Character::getInventory()
{
	return (_inventory);
}
