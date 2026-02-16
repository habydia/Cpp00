#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <algorithm>
# include <cstdio>
# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
  public:
	// contructeur destructeur
	PhoneBook(void);
	~PhoneBook(void);

	// commands
	int add_contact(Contact &new_contact);
	int search_contacts();
	int display_contact_list();
	int display_contact_details(int index);
	void exit_program();

  private:
	Contact _contacts[8];
	int _nb_contact;
	int _index;
};

#endif