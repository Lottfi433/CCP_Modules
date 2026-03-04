/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 10:55:19 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/03 12:50:18 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB{
private:
    Weapon* weapon;
    std::string name;
public:
    HumanB(std::string name);
    void setWeapon(Weapon& weapon);
    void attack() const;
};