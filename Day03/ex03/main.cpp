#include "DiamondTrap.hpp"

int     main(void)
{
    ClapTrap    Lol("Lol");
    ClapTrap    Kek("Kek");
    std::cout << "\n";
    ScavTrap    Chebureck("Chebureck");
    ScavTrap    Atos("Atos");
    std::cout << "\n";
    FragTrap    Portos("Portos");
    FragTrap    Patris("Patris");
    std::cout << "\n";
    DiamondTrap Tom("Tom");
    DiamondTrap Tabris("Tabris");
    std::cout << "\n";
    Lol.attack("Kek");
    Lol.takeDamage(0);
    Lol.beRepaired(2);
    std::cout << "\n";
    Kek.attack("Lol");
    Kek.takeDamage(0);
    Kek.beRepaired(1);
    std::cout << "\n";
    Chebureck.attack("Kek");
    Chebureck.takeDamage(45);
    Chebureck.beRepaired(10);
    Chebureck.guardGate();
    std::cout << "\n";
    Portos.attack("Chebureck");
    Portos.takeDamage(20);
    Portos.beRepaired(10);
    Portos.highFivesGuys();
    Patris.highFivesGuys();
    std::cout << "\n";
    Portos.attack("Chebureck");
    Portos.takeDamage(20);
    Portos.beRepaired(10);
    Portos.highFivesGuys();
    Patris.highFivesGuys();
    std::cout << "\n";
    Tom.attack("Portos");
    Tom.takeDamage(32);
    Tom.beRepaired(14);
    Tom.whoAmI();
    Tabris.highFivesGuys();
    Tabris.guardGate();
    std::cout << "\n";
    return 0;
}

