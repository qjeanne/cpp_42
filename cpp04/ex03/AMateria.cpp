#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	_type = type;
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria default destructor called" << std::endl;
}

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria &AMateria::operator =(const AMateria &other)
{
	_type = other._type;
	std::cout << "AMateria operator = called" << std::endl;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (_type);
}

void AMateria::use(__unused ICharacter& target)
{

}
