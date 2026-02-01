/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 09:49:29 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/31 13:08:25 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name){
    _name = Name; 
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}
ClapTrap::ClapTrap(){
    _name = "Default"; 
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap Default constractor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other){
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    std::cout << "ClapTrap Copy constructor called" << std::endl;
}
ClapTrap&   ClapTrap::operator=(const ClapTrap& other){
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    if (this != &other){
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string& target){
    if (_hitPoints <= 0 || _energyPoints <= 0)
        return;
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
              << _attackDamage << " points of damage !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount){
    if (_hitPoints <= 0)
        return;
    if ((int)amount >= _hitPoints)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes "
              << amount << " points of damage!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (_energyPoints <= 0 || _hitPoints <= 0)
        return ;
    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " Repaired and got  "
              << amount << " points of hit points!" << std::endl;
}
