#include "../include/phoneBook.hpp"

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
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
}

// l'uttilisateur entre une c
// selon le type de commande la bonne commande est appelée

int	main(int argc, char **argv)
{
	PhoneBook repertoire;
	Contact a_contact;

	if (argc == 2)
	{
		while (true)
		{
			std::string input = argv[1];
			std::cout << "Enter a command (ADD, SEARCH, EXIT): " << std::endl;
			std::cin >> input;
			if (input == "ADD")
			{
				repertoire.add_contact(a_contact);
			}
			else if (input == "SEARCH")
			{
				repertoire.display_contact(a_contact);
			}
			else if (input == "EXIT")
			{
				std::cout << "Exiting program." << std::endl;
				// repertoire.exit_program();
			}
			else
			{
				std::cout << "Invalid command" << std::endl;
			}
		}
		return (0);
	}
}