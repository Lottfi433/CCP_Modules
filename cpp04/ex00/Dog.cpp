/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:17:07 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/02/08 11:20:57 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
    std::cout << "Dog Default constructor Called." << std::endl;
}
Dog::Dog(const Dog& other){
    type = other.type;
    std::cout << "Dog copy constructor called." << std::endl;
}
Dog& Dog::operator=(const Dog& other){
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}
Dog::~Dog(){
    std::cout << "Dog Destructor called" << std::endl;
}
void    Dog::makeSound() const{
    std::cout << "Dog is Barking!" << std::endl;
}