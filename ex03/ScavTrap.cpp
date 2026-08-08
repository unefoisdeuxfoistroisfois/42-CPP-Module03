#include "ScavTrap.hpp"
#include <iostream>

// Constructor
ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap " << this->_name << " default constructor called" << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

// Constructor with parametre (name)
ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	// this->_name = name; pas beosin car nontre ClapTrap le fait deja

  std::cout << "ScavTrap " << this->_name << " parametrized constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

// Constructor copy
ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src){
  std::cout << "ScavTrap " << this->_name << " copy constructor called" << std::endl;

	// *this = src; pas besoin ClapTrap le fais deja
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
   std::cout << "Copy assignment operator called" << std::endl;

   //if (this != &rhs){
   //    this->_name = rhs._name;
   //    this->_hitPoints = rhs._hitPoints;
   //    this->_energyPoints = rhs._energyPoints;
   //    this->_attackDamage = rhs._attackDamage;
   //}
   // ou utilsé le parent
   if (this != &rhs){
    ClapTrap::operator=(rhs);
   }

   return (*this);
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target){
    if (this->_energyPoints <= 0){
        std::cout << this->_name << " has no more energy points to attack " << std::endl;
        return ;
    } else if (this->_hitPoints <= 0){
        std::cout << this->_name << " has no more hit points to attack " << std::endl;
        return ;
    } else {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << _attackDamage << " points of damage !" << std::endl;
        this->_energyPoints --;
    }
}

void    ScavTrap::guardGate(){
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
}
