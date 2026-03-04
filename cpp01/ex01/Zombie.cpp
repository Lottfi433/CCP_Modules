/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 09:45:14 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/01 10:05:46 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name){
    this->name = name;
}
void Zombie::setName(std::string name) {
    this->name = name;
}
Zombie::Zombie() {};

Zombie::~Zombie(){
    std::cout << name << " is destroyed" << std::endl;
}
