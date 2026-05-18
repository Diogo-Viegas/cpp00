#include "Contact.hpp"

Contact::Contact()
{

}
std::string Contact::getFirstName() const
{
    return (this->first_name);
}
std::string Contact::getLastName() const
{
    return(this->last_name);
}
std::string Contact::getNickname()const
{
    return (this->nickname);
}
void Contact::saveFirstName(std::string first)
{
    this->first_name = first;
}
void Contact::saveLastName(std::string last)
{
    this->last_name = last;
}
void Contact::saveNickname(std::string nick)
{
    this->nickname = nick;
}
void Contact::savePhone(std::string phone)
{
    this->phone_number = phone;
}
void Contact::saveSecret(std::string secret)
{
    this->darkest_secret = secret;
}