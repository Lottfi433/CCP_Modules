/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 09:53:07 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/31 13:12:34 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
};

ScavTrap::ScavTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& other){
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::attack(const std::string& target){
    if (_hitPoints <= 0 || _energyPoints <= 0)
        return;
    _energyPoints--;
    std::cout << "ScavTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate(){
    std::cout << "ScavTrap "<< _name << "  is now in Gate keeper mode." << std::endl;
}