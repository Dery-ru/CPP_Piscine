#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    try
	{
    	Bureaucrat	good("Good_Boy", 2);
		std::cout << good << std::endl;
		std::cout << "-------------------------------------------\n";
		ShrubberyCreationForm	Shrubbery("Shrubbery");
        std::cout << Shrubbery << std::endl;
		good.signForm(Shrubbery);
		good.executeForm(Shrubbery);
		std::cout << Shrubbery << std::endl;
    	std::cout << "-------------------------------------------\n";
		RobotomyRequestForm		Robotomy("Robotomy");
		std::cout << Robotomy << std::endl;
		good.signForm(Robotomy);
		good.executeForm(Robotomy);
		std::cout << Robotomy << std::endl;
		std::cout << "-------------------------------------------\n";
		PresidentialPardonForm	Presidential("Presidential");
		std::cout << Presidential << std::endl;
		good.signForm(Presidential);
		good.executeForm(Presidential);
		std::cout << Presidential << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------\n";
	std::cout << "-------------------------------------------\n";
	try
	{
    	Bureaucrat	bad("Bad_Boy", 150);
		std::cout << bad << std::endl;
		std::cout << "-------------------------------------------\n";
		ShrubberyCreationForm	Shrubbery("Shrubbery");
        std::cout << Shrubbery << std::endl;
		bad.signForm(Shrubbery);
		bad.executeForm(Shrubbery);
		std::cout << Shrubbery << std::endl;
    	std::cout << "-------------------------------------------\n";
		RobotomyRequestForm		Robotomy("Robotomy");
		std::cout << Robotomy << std::endl;
		bad.signForm(Robotomy);
		bad.executeForm(Robotomy);
		std::cout << Robotomy << std::endl;
		std::cout << "-------------------------------------------\n";
		PresidentialPardonForm	Presidential("Presidential");
		std::cout << Presidential << std::endl;
		bad.signForm(Presidential);
		bad.executeForm(Presidential);
		std::cout << Presidential << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
    return 0;
}