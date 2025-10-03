#ifndef PHONEBOOK_H
# define PHONEBOOH_H

# include <algorithm>
# include <cstdio>
# include <iostream>
# include <string>

// contients les contacts
// fonction dájout de contact

class PhoneBook
{
  public:
	char *command;
	// contructeur destructeur
	PhoneBook(void);
	~PhoneBook(void);

	// commands
	char *add_contact();
	// void search_contact();
	// void exit_program();

  private:
	const char **_repertoire;
};

// un contact du repertoire
class Contact
{
  private:
	char **_contact;

  public:
	std::string name;
	std::string phoneNumber;
	std::string darkestSecret;
};

#endif