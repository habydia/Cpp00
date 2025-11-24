
#include "../include/phoneBook.hpp"

void Contact::setName(const std::string &name)
{
	this->name = name;
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