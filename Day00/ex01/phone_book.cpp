#include "phone_book.hpp"

void    printStr(std::string str)
{
	if (str.length() < 10)
	{
		std::cout << str;
		std::cout << std::setw(11 - str.length());
	}
	else if (str.length() == 10)
		std::cout << str;
	else
	{
		std::cout << str.substr(0, 9);
		std::cout << ".";
	}
	std::cout << "|";
}

void	eofError(void)
{
	if (std::cin.eof())
		exit(EXIT_SUCCESS);
}

void	Contact::fillInfo(void)
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Please, enter a contact's First Name" << std::endl;
	std::cin >> first_name;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Please, enter contact's Last Name" << std::endl;
	std::cin >> last_name;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Please, enter contact's Nickname" << std::endl;
	std::cin >> nickname;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Please, enter contact's Phone Number" << std::endl;
	std::cin >> phone_number;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Please, enter contact's darkest secret" << std::endl;
	std::cin >> darkest_secret;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void	Phonebook::addContact(int *i)
{
	if (*i == 7)
		*i = 0;
	else
		(*i)++;
	person[*i].fillInfo();
}

void	Contact::printMainInfo(void)
{
	printStr(first_name);
	printStr(last_name);
	printStr(nickname);
}

void	Contact::printAllInfo(void)
{
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone Number: " << phone_number << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}

bool	Contact::ifContactExist(void)
{
	if (first_name.empty())
		return (false);
	return (true);
}

int		Phonebook::printAllContacts(void)
{
	int	num;

	printStr("Index");
	printStr("First Name");
	printStr("Last Name");
	printStr("Nickname");
	std::cout << std::endl;
	for (num = 0; num < 8 && person[num].ifContactExist(); num++)
	{
		std::cout << num + 1 << std::setw(10) << "|";
		person[num].printMainInfo();
		std::cout << std::endl;
	}
	return (num);
}

void	ifManyMistakes(int *check_if_mistake)
{
	if (*check_if_mistake > 4)
	{
		std::cout << "This PhoneBook is too hard for you to handle, go home" << std::endl;
		exit(EXIT_SUCCESS);
	}
	std::cout << "Unavailable, please, try again" << std::endl;
	(*check_if_mistake)++;
}

void	Phonebook::printRequestedContact(int num)
{
	int	index;
	int	check_if_mistake;

	check_if_mistake = 0;
	index = -1;
	while (num && (index < 1 || index > num))
	{
		std::cout << "Please, choose available index from 1 to " << num << std::endl;
		std::cin >> index;
		eofError();
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			ifManyMistakes(&check_if_mistake);
		}
		else if (index < 1 || index > num)
		{
			ifManyMistakes(&check_if_mistake);
			continue ;
		}
		else if (index >= 1 && index <= num)
		{
			person[index - 1].printAllInfo();
			break ;
		}
	}
}

int main()
{
	std::string input;
	Phonebook	book;
	int         i;
	int			num;

	i = -1;
	while (true)
	{
		std::cout << "Please, choose a command:" << std::endl;
		std::cout << "EXIT, ADD or SEARCH" << std::endl;
		std::cin >> input;
		eofError();
		if (input.compare("EXIT") == 0)
			exit(EXIT_SUCCESS);
		else if (input.compare("ADD") == 0)
			book.addContact(&i);
		else if (input.compare("SEARCH") == 0)
		{
			num = book.printAllContacts();
			book.printRequestedContact(num);
		}
		else
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}
