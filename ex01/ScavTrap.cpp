#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    this->m_hitPoints = 100;
    this->m_energyPoints = 50;
    this->m_attackDamage = 20;

    std::cout << "'ScavTrap' > " << this->m_name << " constructed." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "'ScavTrap' > " << this->m_name << " destructed." << std::endl;
}

void    ScavTrap::attack( std::string const& target ) {
    if ( this->m_energyPoints <= 0 ) {
        std::cout << "'ScavTrap' > " << this->m_name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "'ScavTrap' > " << this->m_name << " attacks " << target << " at range, causing " << this->m_attackDamage << " points of damage !" << std::endl;
    this->m_energyPoints -= 1;
}

void    ScavTrap::guardGate() {
    std::cout << "'ScavTrap' > " << this->m_name << " is now in Gate keeper mode." << std::endl;
}