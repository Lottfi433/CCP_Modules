/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrongcat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:22:05 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/02/08 12:51:50 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
public:
    WrongCat();
    WrongCat(const WrongCat& other);
    WrongCat& operator=(const WrongCat& other);
    ~WrongCat();

    void makeSound() const;
};