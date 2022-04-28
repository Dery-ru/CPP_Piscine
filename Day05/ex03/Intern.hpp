#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
    Intern(const Intern &copy);
	Intern &operator=(const Intern &other);
	~Intern();
	class UnknownFormNameException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	Form	*makeForm(std::string type, std::string target);
};

#endif