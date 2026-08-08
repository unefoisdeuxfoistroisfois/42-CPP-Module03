#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name") {
	this->_name = "Default";

	std::cout << "DiamondTrap " << this->_name << " default constructor called" << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
	this->_name = name;

	std::cout << "DiamondTrap " << this->_name << " parametrized constructor called" << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;

}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src){ // pour la bonen sortie
	// *this = src; pas besoin car ClapTrap le gere deja
	// masi il faut gérér pour les attribut de Diamond Trap

	// Pour les attribut de DiamondTrap
	//*this = src;
	// ou 
	this->_name = src._name;

  std::cout << "DiamondTrap " << this->_name << " copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs){
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs){
		ClapTrap::operator=(rhs); // partie héritée
		this->_name = rhs._name; //  partie enfant atrrbiut de DiamondTrap
	}
	
	return (*this);
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << this->_name << " destructor called" << std::endl;
}


void	DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
	std::cout << " Hey I am DiamondTrap :  " << this->_name << ", I am the original ClapTrap : " << ClapTrap::_name << std::endl;

}