#include "FragTrap.hpp"

int main()
{
    FragTrap defaultFrag;
    FragTrap bradley("Bradley");
    bradley.attack("another target");
    bradley.highFivesGuys();
    FragTrap copy(bradley);
    defaultFrag = bradley;

    return 0;
}
