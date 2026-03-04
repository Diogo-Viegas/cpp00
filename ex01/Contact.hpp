#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
class Contact
{
    private:
        std::string _fname;
        std::string _lname;
        std::string _nickname;
        std::string _phonenumber;
        std::string _secret;

    public:
        Contact();
        ~Contact();
        std::string get_fname(void) const;
        std::string get_lname(void) const;
        std::string get_nickname(void) const;
        std::string get_phonenumber(void) const;
        std::string get_secret(void) const;

        void    set_fname(std::string str);
        void    set_lname(std::string str);
        void    set_nickname(std::string str);
        void    set_phonenumber(std::string str);
        void    set_secret(std::string str);

        


};

#endif