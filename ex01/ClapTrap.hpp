#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;

    public:
        // Constructor
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &src);          // constructeur par copie
        ClapTrap &operator=(const ClapTrap &rhs);


        // Destructor
        ~ClapTrap();

        // Public methodes
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif