#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	_type = "ice";
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice default destructor called" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
	_type = other._type;
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator =(const Ice &other)
{
	AMateria::operator =(other);
	std::cout << "Ice operator = called" << std::endl;
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria* new_ice = new Ice(*this);
	return (new_ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
