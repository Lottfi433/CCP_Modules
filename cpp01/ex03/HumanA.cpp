/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 10:54:56 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/03 13:17:38 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack() const {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
HumanA::HumanA(std::string name, Weapon& weapon) 
     : name(name), weapon(weapon){}
