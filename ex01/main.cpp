#include "ClapTrap.hpp"

int main(){

    std::cout << "===Constuctor===" << std::endl;
    ClapTrap    a;
    ClapTrap    b("La tueur");

    std::cout << "===Action Normal===" << std::endl;
    a.attack("Default");
    b.takeDamage(3);
    b.beRepaired(2);

    std::cout << "===Plus energie===" << std::endl;
    for (int i = 0; i < 10; i++){
        b.attack("Alfred");
    }

    b.attack("Bradley");
    b.beRepaired(5);

    std::cout << "===Plus de HP===" << std::endl;
    a.takeDamage(20);

    a.attack("Divina");
    a.beRepaired(5);

    return (0);
}