#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string     m_name;
    unsigned int    m_hitPoints;
    unsigned int    m_energyPoints;
    unsigned int    m_attackDamage;
    ClapTrap();

public:
    ClapTrap( std::string name );
    ~ClapTrap();

    ClapTrap(const ClapTrap &);
    ClapTrap&       operator=(const ClapTrap& rhs);

    void            attack(std::string const& target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);

};

#endif