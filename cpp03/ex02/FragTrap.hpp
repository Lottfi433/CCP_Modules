/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 12:41:33 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/31 13:19:52 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
class FragTrap: public ClapTrap{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);
    FragTrap&   operator=(const FragTrap& other);
    ~FragTrap();
    
    void attack(const std::string& target);
    void highFivesGuys(void);
};