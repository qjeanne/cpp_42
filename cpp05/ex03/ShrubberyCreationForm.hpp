#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "fstream"

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(const ShrubberyCreationForm &shrubbery_creation_form);
		ShrubberyCreationForm(std::string const &target);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator =(const ShrubberyCreationForm &shrubbery_creation_form);

		int	execute(Bureaucrat const &executor) const;
};


#endif
