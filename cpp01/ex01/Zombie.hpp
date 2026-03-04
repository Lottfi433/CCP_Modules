/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 09:45:18 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/01 10:16:02 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class   Zombie{
    private:
        std::string name;
    public:
        void announce(void);
        void setName(std::string name);
        Zombie(std::string name);
        Zombie();
        ~Zombie();
};
Zombie* zombieHorde( int N, std::string name );