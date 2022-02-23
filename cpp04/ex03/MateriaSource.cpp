#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int		idx = 0;

	while (idx < 4)
		_inventory[idx++] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	int 	idx = 0;

	while (idx < 4 && _inventory[idx] != NULL)
	{
		delete _inventory[idx];
		idx++;
	}
	std::cout << "MateriaSource default destructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	int		idx = 0;

	while (idx < 4)
	{
		_inventory[idx] = other._inventory[idx];
		idx++;
	}
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator =(MateriaSource const &other)
{
	IMateriaSource::operator=(other);
	std::cout << "MateriaSource operator = called" << std::endl;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	int		idx = 0;

	while (idx < 4 && _inventory[idx] != NULL)
		idx++;
	if (idx < 4)
		_inventory[idx] = m;
	std::cout << "Learned new materia: " << m->getType() << " in " << idx + 1 << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int		idx = 0;

	while (idx < 4 && _inventory[idx] != NULL)
		if (_inventory[idx]->getType() == type)
			return (_inventory[idx]->clone());
		else
			idx++;
	return 0;
}
