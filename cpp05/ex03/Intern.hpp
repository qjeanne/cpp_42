#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		struct  FormMaker
		{
			std::string     formName;
			Form            *(*f)(std::string const &target);
		};

		static const FormMaker  _tab[3];

		static Form    *makePresidentialPardonForm(std::string const &target);
		static Form    *makeRobotomyRequestForm(std::string const &target);
		static Form    *makeShrubberyCreationForm(std::string const &target);

	public:
		Intern();
		Intern(Intern const &other);
		~Intern();

		Intern	&operator =(Intern const &other);

		Form	*makeForm(std::string formName, std::string target);
};


#endif
