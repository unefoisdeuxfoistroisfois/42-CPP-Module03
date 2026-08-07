#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{	// ScavTrap est un ClapTrap et il hérite de tout se qui est public et protected
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &src);	// constructeur par copie
		ScavTrap &operator=(const ScavTrap &rhs);

		~ScavTrap();
		
		void attack(const std::string& target);
		void guardGate();
};

#endif