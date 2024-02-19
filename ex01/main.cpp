#include "ScavTrap.hpp"

int main( void )
{
    ClapTrap clap("Carlos");
    ScavTrap clap2("Patrick");
    ClapTrap clap3("Bob");

    clap.attack("Patrick");
    clap2.takeDamage(0);
    clap2.guardGate();
    clap2.beRepaired(1);
    return 0;
}