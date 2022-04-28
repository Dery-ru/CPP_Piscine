#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
	_target = "Unknown";
	std::cout << "Default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
	std::cout << "Constructor RobotomyRequestForm with target = ";
	std::cout << getTarget() << " called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	this->_target = copy._target;
	std::cout << "Copy constructor called\n";
}

RobotomyRequestForm&  RobotomyRequestForm::operator= (const RobotomyRequestForm &other)
{
	std::cout << "Assignation operator called\n";
    if (this == &other)
        return *this;
	this->_target = other.getTarget();
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Destructor Robotomy called\n";
}

std::string RobotomyRequestForm::getTarget(void) const
{
    return _target;
}

void	RobotomyRequestForm::action(void) const
{
	std::cout << "<Makes some drilling noises>\n";
	if (rand() % 2)
		std::cout << _target << " has been successfully robotomized!\n";
	else
		std::cout << _target << "robotomize failed!\n";
}