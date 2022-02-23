#ifndef EX01_BRAIN_HPP
#define EX01_BRAIN_HPP

#include "iostream"
#include "string"

class Brain
{
	protected:
		std::string		*ideas;

	public:
		Brain();
		~Brain();
		Brain(const Brain &other);

		Brain &operator =(const Brain &other);
};


#endif
