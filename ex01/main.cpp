#include "ClapTrap.hpp"

int main(){

    std::cout << "===Contstuctor===" << std::endl;
    ClapTrap    a;
    ClapTrap    b("La copie");

    std::cout << "===Action===" << std::endl;
    a.attack("Default");
    //b.attack();

    return (0);
}