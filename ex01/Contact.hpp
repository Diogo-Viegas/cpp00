#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        void saveFirstName(std::string first);
        void saveLastName(std::string last);
        void saveNickname(std::string nick);
        void savePhone(std::string phone);
        void saveSecret(std::string secret);
        
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getPhone() const;
        std::string getSecret() const;
        Contact();
        ~Contact();
};
#endif
