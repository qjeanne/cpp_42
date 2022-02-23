#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidential_pardon_form) :
		Form(presidential_pardon_form.getName(), presidential_pardon_form.getGradeSign(), presidential_pardon_form.getGradeExecute(), presidential_pardon_form.getTarget())
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
		Form("Presidential Creation", 25, 5, target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &presidential_pardon_form)
{
	this->setIsSigned(presidential_pardon_form.getIsSigned());
	return *this;
}

int	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= getGradeExecute() && this->getIsSigned())
	{
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
	}
	else if (!getIsSigned())
		std::cout << "Form unsigned, cannot execute" << std::endl;
	else
		throw Form::GradeTooLowException();
	return 0;
}

