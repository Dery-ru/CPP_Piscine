#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Default constructor Intern called\n";
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
	std::cout << "Copy constructor Intern called\n";
}

Intern&  Intern::operator= (const Intern &other)
{
	std::cout << "Assignation operator Intern called\n";
    if (this == &other)
        return *this;
	return *this;
}

const char *Intern::UnknownFormNameException::what() const throw()
{
	return "Form name is Unknown!";
}

int		getTypeOfForm(std::string type)
{
	std::string	types[] = {"Shrubbery", "Robotomy", "Presidential"};
	for (int i = 0; i < 4; i++)
	{
		if (type == types[i - 1])
			return i ;
	}
	return 0;
}

Form	*Intern::makeForm(std::string type, std::string target)
{
	switch (getTypeOfForm(type))
	{
	case 1:
		return new ShrubberyCreationForm(target);
		break;
	case 2:
		return new RobotomyRequestForm(target);
		break;
	case 3:
		return new PresidentialPardonForm(target);
		break;	
	default:
		throw UnknownFormNameException();
	}
	return NULL;
}


Intern::~Intern(void)
{
	std::cout << "Default desstructor Intern called\n";
}