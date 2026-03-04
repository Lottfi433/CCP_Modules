/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 10:54:17 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/03 13:11:37 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon{
private:
    std::string type;
public:
    Weapon(std::string t);
    const std::string& getType() const;
    void  setType(std::string newValue);
};