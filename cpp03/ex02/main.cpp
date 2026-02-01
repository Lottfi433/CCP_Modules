/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 13:17:42 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/31 13:22:48 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
int main(){
    ScavTrap a("Scav");
    FragTrap b("Frag");
    ClapTrap c("Clap");
    a.takeDamage(10);
    a.attack("hamid");
    a.guardGate();
    b.takeDamage(10);
    b.attack("hamid");
    c.takeDamage(10);
    c.attack("hamid");
    b.highFivesGuys();
}