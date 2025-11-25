

#include "phoneBook.hpp"
#include <cstdlib>
#include <sstream>
#include <limits>

int PhoneBook::add_contact(Contact &new_contact)
{
	if (new_contact.create_contact(new_contact) != 1)
	{
		std::cout << "Failed to add contact. Please fill in all fields." << std::endl;
		return (0);
	}
	_contacts[_index] = new_contact;
	_index = (_index + 1) % 8;
	if (_nb_contact < 8)
		_nb_contact++;
	return (1);
}

int Contact::create_contact(Contact &new_contact)
{
	std::string input;
	std::cout << "enter first name: " << std::endl;
	std::cin >> input;
	new_contact.setName(input);
	std::cout << "enter last name: " << std::endl;
	std::cin >> input;
	new_contact.setLastName(input);
	std::cout << "enter nickname: " << std::endl;
	std::cin >> input;
	new_contact.setNickName(input);
	std::cout << "enter phone number: " << std::endl;
	std::cin >> input;
	new_contact.setPhoneNumber(input);
	std::cout << "enter darkest secret: " << std::endl;
	std::cin >> input;
	new_contact.setDarkestSecret(input);
	return (1);
}

void print_field(const std::string &str, int width)
{
	std::string s = str;
	int len = s.length();
	if (len > width)
	{
		s = s.substr(0, width - 1) + ".";
	}
	std::string padded = std::string(width - s.length(), ' ') + s;
	std::cout << padded;
}

int PhoneBook::display_contact_list()
{
	if (_nb_contact == 0)
	{
		std::cout << "No contacts to display." << std::endl;
		return (-1);
	}
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (int i = 0; i < _nb_contact; i++)
	{
		std::stringstream ss;
		ss << i;
		std::string idx = ss.str();
		std::string padded_idx = std::string(10 - idx.length(), ' ') + idx;
		std::cout << padded_idx << "|";
		print_field(_contacts[i].getName(), 10);
		std::cout << "|";
		print_field(_contacts[i].getLastName(), 10);
		std::cout << "|";
		print_field(_contacts[i].getNickName(), 10);
		std::cout << std::endl;
	}
	return (0);
}

int PhoneBook::display_contact_details(int index)
{
	if (index < 0 || index >= _nb_contact)
	{
		std::cout << "Invalid index." << std::endl;
		return (-1);
	}
	std::cout << "First Name: " << _contacts[index].getName() << std::endl;
	std::cout << "Last Name: " << _contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << _contacts[index].getNickName() << std::endl;
	std::cout << "Phone Number: " << _contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << _contacts[index].getDarkestSecret() << std::endl;
	return (0);
}

int PhoneBook::search_contacts()
{
	display_contact_list();
	std::cout << "Enter index: ";
	int index;
	std::cin >> index;
	if (std::cin.fail())
	{
		std::cout << "Invalid input." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return (-1);
	}
	display_contact_details(index);
	return (0);
}

void PhoneBook::exit_program()
{
	std::cout << "Exiting program." << std::endl;
	exit(0);
}
