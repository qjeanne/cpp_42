#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice &other);

		Ice &operator =(const Ice &other);

		AMateria* clone() const;
		void use(ICharacter& target);
};


#endif
