#include "../include/phoneBook.hpp"

// repertoire vide au demarrage
// ADD : invite a ajouter un contact, ajoute le contact au repertoire
// namme, lastname, nickname, phone number, darksecret
// veiller a se que toutes champs soient remplis

// SEARCH : affiche le repertoire
// affiche un contact specifique sous forme de liste
// 4 colonnes : index, first name, last name, nickname

// EXIT : quitte le programme proprement

PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
}

~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
}

// l'uttilisateur entre une c
// selon le type de commande la bonne commande est appelée

int	main(int argc, char **argv)
{
	PhoneBook PhoneBook1;

	PhoneBook1.command = argv[1];
	if (argc != 2)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
	}

	else if (PhoneBook1.command == "ADD")
		PhoneBook1.add_contact();
	else if (PhoneBook1.command == "SEARCH")
		PhoneBook1.search_contact();
	else if (PhoneBook1.command == "EXIT")
		PhoneBook1.exit_program();
	else
		std::cout << "Error: command not found" << std::endl;
	return (0);
}