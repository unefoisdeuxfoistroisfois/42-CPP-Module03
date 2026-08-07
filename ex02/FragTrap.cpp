#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "FragTrap " << this->_name << " default constructor called" << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	// this->_name = name; pas beosin car nontre ClapTrap le fait deja
	std::cout << "FragTrap " << this->_name << " parametrized constructor called" << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src){
  std::cout << "FragTrap " << this->_name << " copy constructor called" << std::endl;

	// *this = src; pas besoin ClapTrap le fais deja
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
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

FragTrap::~FragTrap(){
    std::cout << "FragTrap " << this->_name << " destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << this->_name << " requests a positive high five!" << std::endl;
}