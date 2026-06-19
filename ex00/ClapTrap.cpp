#include "ClapTrap.hpp"

// Constructor
ClapTrap::ClapTrap(){
    this->_name = "Default";

    std::cout << "ClapTrap " << this->_name << " default constructor called" << std::endl;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

// Constructor with parametre (name)
ClapTrap::ClapTrap(std::string name){
    this->_name = name;

    std::cout << "ClapTrap " << this->_name << " parametrized constructor called" << std::endl;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

// Constructor copy
ClapTrap::ClapTrap(const ClapTrap &src){ // Copie un claptrap deja existatn
    std::cout << "ClapTrap " << this->_name << " copy constructor called" << std::endl;

    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;

    //ou
    //*this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &rhs){
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }

    return (*this);
}

// Destructor
ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap " << this->_name << " destructor called" << std::endl;
}

// Public methodes
void    ClapTrap::attack(const std::string &target){
    // C void(target);
    //(void)target;

    if (this->_energyPoints <= 0){
        std::cout << this->_name << "n'a assez de point d'energie" << std::endl;
        return ;
    } else if (this->_hitPoints <= 0){
        std::cout << this->_name << "n'a assez de point de vie" << std::endl;
        return ;
    }
    std::cout << this->_name << " attacks " << target << ", causing " << _attackDamage << " points of damage !" << std::endl;
    this->_energyPoints --;
}

void    ClapTrap::takeDamage(unsigned int amount){
    amount ++;
}

void ClapTrap::beRepaired(unsigned int amount){
    (void)amount;
}