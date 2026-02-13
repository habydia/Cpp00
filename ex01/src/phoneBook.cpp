#include "../include/phoneBook.hpp"
#include <limits>

// repertoire vide au demarrage
// ADD : invite a ajouter un contact, ajoute le contact au repertoire
// namme, lastname, nickname, phone number, darksecret
// veiller a se que toutes champs soient remplis

// SEARCH : affiche le repertoire
// affiche un contact specifique sous forme de liste
// 4 colonnes : index, first name, last name, nickname

// EXIT : quitte le programme proprement

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

// l'uttilisateur entre une c
// selon le type de commande la bonne commande est appelée

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