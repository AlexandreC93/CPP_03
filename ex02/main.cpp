#include "FragTrap.hpp"

int main( void )
{
    FragTrap Carlos( "Carlos" );
    FragTrap Patrick("Patrick");

    Carlos.attack( "" );
    Carlos.takeDamage( 10 );
    Carlos.beRepaired( 10 );
    Carlos.highFive();
    
    return 0;
}