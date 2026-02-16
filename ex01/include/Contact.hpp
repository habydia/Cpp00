#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <algorithm>
# include <cstdio>
# include <iostream>
# include <string>

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

#endif