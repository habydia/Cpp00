
#include "phoneBook.hpp"

// add

char *PhoneBook::add_contact(char *name, char *phoneNumber,
	char *darksecret) : name(new_name), phoneNumber(new_phoneNumber),
	darkestSecret(new_darkestSecret)
{
	char	*new_contact[4];
	int		i;

	i = 0;
	std::cout << "Enter a new contact: " << std::endl;
	while (new_contact[i] != NULL)
	{
		if (new_contact[i])
		{
			std::cout << "Name: ";
			std::cin >> new_contact[0] >> name;
			std::cout << "Phone Number: ";
			std::cin >> new_contact[1] >> phoneNumber;
			std::cout << "Darkest Secret: ";
			std::cin >> new_contact[2] >> darkestSecret;
		}
		i++;
	}
	std::cout << "Contact added!" << std::endl;
	return (new_contact);
	// ajouter un contact
}

// contact::show_contact() const {

// phoneBook::search_contact(const char **repertoire)
// {
// 	while (contacts)
// 	{
// 	}
// 	// chercher un contact
// }
