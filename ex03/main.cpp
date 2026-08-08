#include "DiamondTrap.hpp"

int main()
{

    DiamondTrap defaultDiamond;
    DiamondTrap bradley("Bradley");

    bradley.whoAmI();
    defaultDiamond.whoAmI();

    bradley.attack("Divina");

    // Les fonctions héritées de ClapTrap
    bradley.takeDamage(20);
    bradley.beRepaired(10);

    // Les fonctions héritées de Scav et Frag
    bradley.guardGate();
    bradley.highFivesGuys();

    // copie
    DiamondTrap copy(bradley);
    copy.whoAmI();

    // = 
    defaultDiamond = copy;
    defaultDiamond.whoAmI();

    return (0);
}
