/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:17:48 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/02/08 11:21:19 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    type = "Cat";
    std::cout << "Cat Default constructor Called." << std::endl;
}
Cat::Cat(const Cat& other){
    type = other.type;
    std::cout << "Cat copy constructor called." << std::endl;
}
Cat& Cat::operator=(const Cat& other){
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}
Cat::~Cat(){
    std::cout << "Cat Destructor called" << std::endl;
}
void    Cat::makeSound() const{
    std::cout << "Cat is meowing!" << std::endl;
}