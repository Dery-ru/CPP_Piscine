#include "Form.hpp"

Form::Form(void)
{
	name = "Unknown";
	grade_to_sign = 1;
	grade_to_execute = 1;
	std::cout << "Default constructor called" << std::endl;
}

Form::Form(std::string _name, unsigned int grade_to_sign, unsigned int grade_to_execute): name(_name)
{
	if (grade_to_execute <1 || grade_to_sign <1)
		throw Form::GradeTooHighException();
	if (grade_to_execute > 150 || grade_to_sign > 150)
		throw Form::GradeTooLowException();
	this->grade_to_sign = grade_to_sign;
    this->grade_to_execute = grade_to_execute;
	std::cout << "Constructor name = " << name << " with grade to sign = " << grade_to_sign;
    std::cout << " and grade to execute = " << grade_to_execute << " called\n";
}

Form::Form(const Form &copy)
{
	this->name = copy.name;
	this->grade_to_sign = copy.grade_to_sign;
	this->grade_to_execute = copy.grade_to_execute;
	std::cout << "Copy constructor called" << std::endl;
}

Form	&Form::operator= (const Form &other)
{
	if (this == &other)
		return *this;
	this->grade_to_sign = other.getGradeToSign();
	this->grade_to_execute = other.getGradeToExec();
	return *this;
	std::cout << "operator= called" << std::endl;
}

std::string	Form::getName(void) const
{
	return name;
}

bool	Form::isSigned(void) const
{
	return is_signed;
}

unsigned int Form::getGradeToExec(void) const
{
	return grade_to_execute;
}

unsigned int Form::getGradeToSign(void) const
{
	return grade_to_sign;
}

const char *Form::FormUnsignedException::what() const throw()
{
	return "Form is unsigned!";
}

void Form::execute(Bureaucrat &exe) const
{
	if (this->isSigned())
	{
		if (exe.getGrade() <= grade_to_execute)
			this->action();
		else
			throw Bureaucrat::GradeTooLowException();
	}
	else
		throw FormUnsignedException();
	std::cout << exe.getName() << " executes form " << this->name << std::endl;
}

void    Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() < grade_to_sign)
        is_signed = true;
    else
    {
        is_signed = false;
        throw Bureaucrat::GradeTooLowException();
    }
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is too hight!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

Form::~Form(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    if (form.isSigned())
        out << "Form " << form.getName() << " with grade to sign " << form.getGradeToSign()
        << " and grade to execute " << form.getGradeToExec() << " is signed";
    else
        out << "Form " << form.getName() << " with grade to sign " << form.getGradeToSign()
        << " and grade to execute " << form.getGradeToExec() << " is not signed";
    return out;
}
