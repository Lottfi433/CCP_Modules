/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:08:43 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/31 09:43:33 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Alpha");
    ClapTrap b("Beta");
    a.attack("Yasser");
    a.takeDamage(10);
    a.attack("hamid");
    return 0;
}
