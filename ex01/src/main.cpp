#include "../include/PhoneBook.hpp"
#include <limits>

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
	_nb_contact = 0;
	_index = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	PhoneBook repertoire;
	Contact a_contact;

	while (true)
	{
		std::string input;
		std::cout << "Enter a command (ADD, SEARCH, EXIT): " << std::endl;
		std::cin >> input;
		if (std::cin.eof())
		{
			std::cout << "Exiting program." << std::endl;
			break;
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (input == "ADD")
		{
			repertoire.add_contact(a_contact);
		}
		else if (input == "SEARCH")
		{
			repertoire.search_contacts();
		}
		else if (input == "EXIT")
		{
			repertoire.exit_program();
		}
		else
		{
			std::cout << "Invalid command" << std::endl;
		}
	}
	return (0);
}