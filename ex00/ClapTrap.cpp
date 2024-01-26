#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : m_name(name), m_hitPoints(10), m_energyPoints(10), m_attackDamage(0)
{
    std::cout << "ClapTrap " << m_name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
    *this = rhs;
    std::cout << "ClapTrap copy constructor called" << std::endl;
    return;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& rhs ) {
    this->m_name = rhs.m_name;
    this->m_hitPoints = rhs.m_hitPoints;
    this->m_energyPoints = rhs.m_energyPoints;
    this->m_attackDamage = rhs.m_attackDamage;
    return *this;
}

void    ClapTrap::attack( std::string const& target )
{
    if (m_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << m_name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_attackDamage << " points of damage!" << std::endl;
    m_energyPoints -= 1;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    if (m_hitPoints <= amount)
    {
        std::cout << "ClapTrap " << m_name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << m_name << " takes " << amount << " damage!" << std::endl;
    m_hitPoints -= amount;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if (m_energyPoints <= amount)
    {
        std::cout << "ClapTrap " << m_name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << m_name << " repairs itself for " << amount << " hit points!" << std::endl;
    m_energyPoints -= 1;
    m_hitPoints += amount;
}