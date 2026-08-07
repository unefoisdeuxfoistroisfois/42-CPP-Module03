#include "ScavTrap.hpp"

int main(){

    ScavTrap Bradley;
    ScavTrap bob("Divina");

    bob.attack("une cible");

    // Les fonctions héritées
    bob.takeDamage(30);
    bob.beRepaired(10);

    bob.guardGate();

    ScavTrap copy(bob);
    Bradley = bob;
}