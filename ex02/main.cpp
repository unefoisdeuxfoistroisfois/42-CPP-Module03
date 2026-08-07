#include "FragTrap.hpp"

int main()
{
    FragTrap defaultFrag;
    FragTrap bradley("Bradley");

    // Les fonctions héritées
    bradley.attack("Divina");
    bradley.takeDamage(20);
    bradley.beRepaired(10);

    bradley.highFivesGuys();

    FragTrap copy(bradley);
    defaultFrag = bradley;

    return 0;
}
