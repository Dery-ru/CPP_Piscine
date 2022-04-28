#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void):name("Unknown"), grade(150)
{
	std::cout << "default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name), grade(_grade)
{
	if (grade <= 0 || grade >= 150){

		std::cout << "Grade " << grade << " is invalid, grade is (1 .. 150)" << std::endl;
	}
	else{;
		std::cout << "Constructor name = " << name << " with grade = " << grade << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	this->name = copy.name;
	this->grade = copy.grade;
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat&	Bureaucrat::operator= (const Bureaucrat &other)
{
	this->grade = other.getGrade();
	std::cout << "operator= called" << std::endl;
	return *this;
}

Bureaucrat	&Bureaucrat::operator++()
{
	if (--grade < 1)
		throw GradeTooHighException();
	return *this;
}

Bureaucrat	&Bureaucrat::operator--()
{
	if (++grade > 150)
		throw GradeTooLowException();
	return *this;
}

unsigned int	Bureaucrat::getGrade() const
{
	return this->grade;
}

std::string Bureaucrat::getName() const
{
	return this->name;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " sign " << form.getName()
			<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << name << " can't sign " << form.getName()
			<< " because " << e.what() << '\n';
	}
}

void	Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << name << " execute " << form.getName()
			<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << name << " can't execute " << form.getName()
			<< " because " << e.what() << '\n';
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade to hight!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade to low!";
}

// std::string	Bureaucrat::signForm(bool isSigned, std::string name)
// {
// 	if (isSigned)
// 		return "Bureaucrat " + this->name + " signed form " + name;
// 	else
// 		return "Bureaucrat " + this->name + " can't signed form " + name + " because ";	
// }

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called\n";
}

std::ostream &operator<< (std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << " Burreaucrat grade " << b.getGrade();
	return out;
}
