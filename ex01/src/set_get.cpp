
#include "../include/phoneBook.hpp"

void Contact::setName(const std::string &name)
{
	this->name = name;
}

void Contact::setLastName(const std::string &lastName)
{
	this->lastName = lastName;
}

void Contact::setNickName(const std::string &nickName)
{
	this->nickName = nickName;
}

void Contact::setPhoneNumber(const std::string &phoneNumber)
{
	this->phoneNumber = phoneNumber;
}
void Contact::setDarkestSecret(const std::string &darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string Contact::getName() const
{
	return (this->name);
}

std::string Contact::getLastName() const
{
	return (this->lastName);
}

std::string Contact::getNickName() const
{
	return (this->nickName);
}

std::string Contact::getPhoneNumber() const
{
	return (this->phoneNumber);
}

std::string Contact::getDarkestSecret() const
{
	return (this->darkestSecret);
}
int Contact::getIndex() const
{
	return (this->index); // Exemple d'index statique
}