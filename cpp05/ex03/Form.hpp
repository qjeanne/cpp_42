#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP

#include "Bureaucrat.hpp"
#include "iostream"
#include "string"
class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		int			const	_grade_sign;
		int			const	_grade_execute;
		bool				_is_signed;
		std::string const	_target;

	public:
		Form(std::string name, int grade_sign, int grade_execute, std::string target);
		~Form();
		Form(const Form &other);

		Form &operator =(const Form &other);

		std::string		getName() const;
		std::string		getTarget() const;
		int 			getGradeSign() const;
		int				getGradeExecute() const;
		bool			getIsSigned() const;
		void			setIsSigned(bool state);
		void			beSigned(Bureaucrat &bureaucrat);
		virtual int		execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				const char 	*what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char 	*what() const throw();
		};
};

std::ostream &operator <<(std::ostream &out, Form &value);

#endif
