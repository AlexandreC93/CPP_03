#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap clap("Carlos");
    ClapTrap clap2("Patrick");
    ClapTrap clap3("Bob");

    clap.attack("Patrick");
    clap2.takeDamage(1);
    clap2.beRepaired(1);
    return 0;
}