#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm();

	public:
		PresidentialPardonForm(const PresidentialPardonForm &presidential_pardon_form);
		PresidentialPardonForm(std::string const &target);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator =(const PresidentialPardonForm &presidential_pardon_form);

		int	execute(Bureaucrat const &executor) const;
};


#endif
