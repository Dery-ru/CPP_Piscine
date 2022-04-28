#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <limits>

class Contact {

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:
	void    fillInfo(void);
	void    printMainInfo(void);
	void	printAllInfo(void);
	bool	ifContactExist(void);
};


class	Phonebook {
	
	Contact	person[8];

public:
	void	addContact(int *i);
	int		printAllContacts(void);
	void	printRequestedContact(int num);
};

#endif