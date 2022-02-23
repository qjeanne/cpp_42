#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	_type = "cure";
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure default destructor called" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
	_type = other._type;
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator =(const Cure &other)
{
	AMateria::operator =(other);
	std::cout << "Cure operator = called" << std::endl;
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria* new_cure = new Cure(*this);
	return (new_cure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
