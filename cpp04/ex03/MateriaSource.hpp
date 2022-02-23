#ifndef EX03_MATERIASOURCE_HPP
#define EX03_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_inventory[4];

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &other);

		MateriaSource &operator =(MateriaSource const &other);

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};


#endif
