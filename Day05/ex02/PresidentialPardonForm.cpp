#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
	_target = "Unknown";
	std::cout << "Default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
	std::cout << "Constructor PresidentialPardonForm with target = ";
	std::cout << getTarget() << " called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	this->_target = copy._target;
	std::cout << "Copy constructor called\n";
}

PresidentialPardonForm&  PresidentialPardonForm::operator= (const PresidentialPardonForm &other)
{
	std::cout << "Assignation operator called\n";
    if (this == &other)
        return *this;
	this->_target = other.getTarget();
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Destructor Presidential called\n";
}

std::string PresidentialPardonForm::getTarget(void) const
{
    return _target;
}

void	PresidentialPardonForm::action(void) const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox.\n";
}