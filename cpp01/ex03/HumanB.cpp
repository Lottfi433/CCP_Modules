/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 10:55:40 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/03 13:04:32 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->name = name;
    this->weapon = nullptr;
}

void HumanB::setWeapon(Weapon& weapon){
    this->weapon = &weapon;
}
void HumanB::attack() const{
    if (weapon)
        std::cout << name << " attacks with their "<< weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon" << std::endl;
}