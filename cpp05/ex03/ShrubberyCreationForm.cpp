#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubbery_creation_form) :
		Form(shrubbery_creation_form.getName(), shrubbery_creation_form.getGradeSign(), shrubbery_creation_form.getGradeExecute(), shrubbery_creation_form.getTarget())
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
		Form("Shrubbery Creation", 145, 137, target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator =(const ShrubberyCreationForm &shrubbery_creation_form)
{
	this->setIsSigned(shrubbery_creation_form.getIsSigned());
	return *this;
}

int	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (executor.getGrade() <= getGradeExecute() && this->getIsSigned()) {
			std::string tmp = this->getTarget() + "_shrubbery";
			std::ofstream ofs(tmp.c_str());
			ofs << "      .\n";
			ofs << "   __/ \\__\n";
			ofs << "   \\     /\n";
			ofs << "   /.'o'.\\\n";
			ofs << "    .o.'.\n";
			ofs << "   .'.'o'.\n";
			ofs << "  o'.o.'.o.\n";
			ofs << " .'.o.'.'.o.\n";
			ofs << ".o.'.o.'.o.'.\n";
			ofs << "   [_____]\n";
			ofs << "    \\___/  for " + this->getTarget() + "\n";
			ofs.close();
			return 1;
		}
		else if (!getIsSigned())
			std::cout << "Form unsigned, cannot execute" << std::endl;
		else
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
