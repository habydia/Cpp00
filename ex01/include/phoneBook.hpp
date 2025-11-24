#ifndef PHONEBOOK_H
# define PHONEBOOH_H

# include <algorithm>
# include <cstdio>
# include <iostream>
# include <string>

class Contact; // Déclaration anticipée

class PhoneBook
{
  public:
	int build_array_contact(int _nb_contact);

	// contructeur destructeur
	PhoneBook(void);
	~PhoneBook(void);

	// commands
	int add_contact(Contact &new_contact);
	void display_contact(const Contact &contact);
	void exit_program();

  private:
	const char **_contacts;
	int _nb_contact;
	int _index;
	int _oldest;
};

// un contact du repertoire
class Contact
{
  private:
	const char *_contact[5];
	std::string name;
	std::string phoneNumber;
	std::string darkestSecret;
	int index;

  public:
	int create_contact(Contact &new_contact);
	// seter
	void setName(const std::string &name);
	void setPhoneNumber(const std::string &phoneNumber);
	void setDarkestSecret(const std::string &darkestSecret);

	// geter
	std::string getName() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
	int getIndex() const;
	// int create_contact(Contact &new_contact);
	// int delete_contact(Contact &del_contact);
	// void display_contact(const Contact &contact);
};

#endif