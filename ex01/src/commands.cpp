

#include "phoneBook.hpp"

int PhoneBook::add_contact(Contact &new_contact)
{
	if (new_contact.create_contact(new_contact) != 1)
	{
		std::cout << "Failed to add contact. Please fill in all fields." << std::endl;
	}
	return (1);
}

int Contact::create_contact(Contact &new_contact)
{
	std::string input;
	std::cout << "enter name: " << std::endl;
	std::cin >> input;
	new_contact.setName(input);
	std::cout << "enter phone number: " << std::endl;
	std::cin >> input;
	new_contact.setPhoneNumber(input);
	std::cout << "enter darkest secret: " << std::endl;
	std::cin >> input;
	new_contact.setDarkestSecret(input);
	return (1); // wrong return
}

void PhoneBook::display_contact(const Contact &contact)
{
	std::cout << "index: " << contact.getIndex() << "|";
	std::cout << "Name: " << contact.getName() << "|";
	std::cout << "Phone Number: " << contact.getPhoneNumber() << "|";
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

// int	delete_contact(Contact &del_contact)
// {
// 	// delete ildelete contact if repertoire is full (8 contacts)
// 	return (0);
// }
