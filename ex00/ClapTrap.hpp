#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
    private:
        std::string _name;

    public:
        // Constructor
        ClapTrap();

        // Destructor
        ~ClapTrap();


        // Public methodes
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif