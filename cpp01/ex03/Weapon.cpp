/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 10:54:12 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/06 09:49:41 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType() const{
    return type;
}
void  Weapon::setType(std::string newValue){
   type = newValue; 
}
Weapon::Weapon(std::string t){
    this->type = t;
}