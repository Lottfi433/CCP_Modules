/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:17:38 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/02/10 10:35:16 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
private:
    Brain* brain;
public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    virtual ~Cat();
    void makeSound() const;
};