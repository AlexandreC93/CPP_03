#include "FragTrap.hpp"

int main( void )
{
    FragTrap Carlos( "Carlos" );
    FragTrap Patrick("Patrick");

    Carlos.attack("Patrick");
    Patrick.takeDamage( 30 );
    Carlos.beRepaired( 10 );
    Carlos.highFive();
    
    return 0;
}