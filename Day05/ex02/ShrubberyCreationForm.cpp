#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	_target = "Unknown";
	std::cout << "Default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
	std::cout << "Constructor ShrubberyCreationForm with target = ";
	std::cout << getTarget() << " called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	this->_target = copy._target;
	std::cout << "Copy constructor called\n";
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator= (const ShrubberyCreationForm &other)
{
	std::cout << "Assignation operator called\n";
    if (this == &other)
        return *this;
	this->_target = other.getTarget();
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Destructor Shrubbery called\n";
}

std::string ShrubberyCreationForm::getTarget(void) const
{
    return _target;
}

void	ShrubberyCreationForm::action(void) const
{
	std::ofstream	file;

	file.open(_target + "_shrubbery");

	try
	{
		file << "              _{/ _{/{//}/}/}__\n";
		file << "              {/{//}{/{//}(/}{//} _\n";
		file << "             {/{//}{/{//}(_)/}{/{//}  _\n";
		file << "          {/{/(/}/}{/{//}/}{/){//}/} //}\n";
		file << "         {/{/(_)/}{/{/)/}{/(_){/}/}/}/}\n";
		file << "        _{/{/{/{/{/{/(_)/}/}/}{/(/}/}/}\n";
		file << "       {/{/{/{/{/(/}{/{//}/}{/}(_){//}/}\n";
		file << "       _{/{/{/{/(_)/}/}{/{/{//}/})/}{//}\n";
		file << "      {/{/{/{/(/}{/{/{/{//})/}{/(_)/}/}/}\n";
		file << "       {/{//}(_){/{/{//}/}(_){//}{//}/})/}\n";
		file << "        {/{/{//}{/{/{/{//}/}{/{//}/}/}(_)\n";
		file << "       {/{/{//}{/){/{/{//}/}{/{/(/}/}/}/}\n";
		file << "        {/{/{//}(_){/{/{/(/}/}{/(_)/}/}/}\n";
		file << "          {/({/{/{/{/{//}(_){//}/}/}/}(/}\n";
		file << "           (_){/{//}{/{//}/}{/{/)/}/}(_)\n";
		file << "             {/{/{/{//}{/{/{/{/(_)/}\n";
		file << "              {/{/{/{//}/}{/{//}/}\n";
		file << "               {){/ {//}{//} /}/}\n";
		file << "               (_)  /.-'.-/\n";
		file << "           __...--- |'-.-'| --...__\n";
		file << "    _...--    .-'   |'-.-'|  ' -.    --..__\n";
		file << "  _    ' .  . '    |.'-._| '  . .  '   jro\n";
		file << "  .  '-  '    .--'  | '-.'|    .  '  . '\n";
		file << "           ' ..     |'-_.-|\n";
		file << "   .  '  .       _.-|-._ -|-._  .  '  .\n";
		file << "               .'   |'- .-|   '.\n";
		file << "   ..-'   ' .  '.   `-._.-|   .'  '  - .\n";
		file << "    .-' '        '-._______.-'     '  .\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
