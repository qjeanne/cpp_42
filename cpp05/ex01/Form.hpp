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
		int 		const	_grade_execute;
		bool				_is_signed;

	public:
		Form(std::string name, int grade_sign, int grade_execute);
		~Form();
		Form(const Form &other);

		Form &operator =(const Form &other);

		std::string		getName();
		int 			getGradeSign();
		int				getGradeExecute();
		bool			getIsSigned();
		void			beSigned(Bureaucrat &bureaucrat);

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
