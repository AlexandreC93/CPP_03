#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->m_hitPoints = 100;
    this->m_energyPoints = 100;
    this->m_attackDamage = 30;

    std::cout << "| FragTrap | > " << this->m_name << " constructed." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "| FragTrap | > " << this->m_name << " destructed." << std::endl;
}

void    FragTrap::highFive( void ) {
    if ( this->m_energyPoints <= 0 ) {
        std::cout << "| FragTrap | > " << this->m_name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "| FragTrap | > " << this->m_name << " high fives everybody." << std::endl;
    this->m_energyPoints -= 1;
}