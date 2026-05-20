#include "Contact.hpp"

Contact::Contact()
{
    this->first_name = "";
    this->last_name = "";
    this->nickname = "";
    this->phone_number = "";
    this->darkest_secret = "";

}
Contact::~Contact()
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
std::string Contact::getPhone()const
{
    return(this->phone_number);
}
std::string Contact::getSecret()const
{
    return(this->darkest_secret);
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

