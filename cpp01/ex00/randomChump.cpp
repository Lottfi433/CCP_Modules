/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    randomChump.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasserlotfi <yasserlotfi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:38:59 by yasserlotfi       #+#    #+#             */
/*   Updated: 2025/12/31 12:39:20 by yasserlotfi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name ){
    Zombie z1(name);
    z1.announce();
}