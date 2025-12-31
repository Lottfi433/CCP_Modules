/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasserlotfi <yasserlotfi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 11:44:36 by yasserlotfi       #+#    #+#             */
/*   Updated: 2025/12/31 12:36:50 by yasserlotfi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class   Zombie{
    private:
        std::string name;
    public:
        void announce(void);
        Zombie(std::string name);
        ~Zombie();
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);