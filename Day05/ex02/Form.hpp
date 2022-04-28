#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string	name;
	bool		is_signed;
	unsigned int		grade_to_sign;
	unsigned int 		grade_to_execute;
public:
	Form();
	Form(std::string _name, unsigned int grade_to_sign, unsigned int grade_to_execute);
	Form(const Form &copy);
	Form &operator= (const Form &other);
	~Form();
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class FormUnsignedException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	std::string	getName() const;
	bool	isSigned() const;
	unsigned int	getGradeToSign() const;
	unsigned int	getGradeToExec() const;
	void	beSigned(Bureaucrat &bur);
	virtual void	execute(Bureaucrat &bur) const;
	virtual void	action() const = 0;
};

std::ostream &operator<<(std::ostream &out, const Form &form); 

#endif