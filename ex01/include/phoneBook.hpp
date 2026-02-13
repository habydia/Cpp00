#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <algorithm>
# include <cstdio>
# include <iostream>
# include <string>

// un contact du repertoire
class Contact
{
  private:
	std::string name;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

  public:
	int create_contact(Contact &new_contact);
	// seter
	void setName(const std::string &name);
	void setLastName(const std::string &lastName);
	void setNickName(const std::string &nickName);
	void setPhoneNumber(const std::string &phoneNumber);
	void setDarkestSecret(const std::string &darkestSecret);

	// geter
	std::string getName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
};

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