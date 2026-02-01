/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 09:50:06 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/31 10:37:48 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
    ScavTrap a("yasser");
    a.attack("said");
    a.takeDamage(10);
    a.attack("hamid");
    a.guardGate();
}