#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    try
	{
    	Bureaucrat	good("Good_Boy", 2);
		std::cout << good << std::endl;
		std::cout << "-------------------------------------------\n";
		Intern	goodIntern;
		Form	*ShrubberyForm = goodIntern.makeForm("Shrubbery", "tree");
		good.signForm(*ShrubberyForm);
		good.executeForm(*ShrubberyForm);
		delete ShrubberyForm;
    	std::cout << "-------------------------------------------\n";
		Form	*RobotomyForm = goodIntern.makeForm("Robotomy", "Bender");
		good.signForm(*RobotomyForm);
		good.executeForm(*RobotomyForm);
		delete RobotomyForm;
		std::cout << "-------------------------------------------\n";
		Form	*PresidentialForm = goodIntern.makeForm("Presidential", "Obama");
		good.signForm(*PresidentialForm);
		good.executeForm(*PresidentialForm);
		delete PresidentialForm;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------\n";
	std::cout << "-------------------------------------------\n";
	try
	{
    	Bureaucrat	good("Good_Boy", 2);
		std::cout << good << std::endl;
		std::cout << "-------------------------------------------\n";
		Intern	unknownIntern;
		Form	*ShrubberyForm = unknownIntern.makeForm("Unknown", "Unknown");
		delete ShrubberyForm;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------\n";
	std::cout << "-------------------------------------------\n";
	try
	{
    	Bureaucrat	good("Good_Boy", 53);
		std::cout << good << std::endl;
		std::cout << "-------------------------------------------\n";
		Intern	badIntern;
		Form	*PresidentialForm = badIntern.makeForm("Presidential", "Bush");
		good.signForm(*PresidentialForm);
		delete PresidentialForm;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
    return 0;
}