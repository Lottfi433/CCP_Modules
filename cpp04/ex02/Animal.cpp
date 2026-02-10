/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 11:20:42 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/02/08 11:26:27 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal Default constructor Called." << std::endl;
}
Animal::Animal(const Animal& other){
    type = other.type;
    std::cout << "Animal copy constructor called." << std::endl;
}
Animal& Animal::operator=(const Animal& other){
    std::cout << "Animal Copy assignment operator called" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}
Animal::~Animal(){
    std::cout << "Animal Destructor called" << std::endl;
}
void Animal::makeSound() const{
    std::cout << "Animal makes a generic sound" << std::endl;
}
std::string Animal::getType() const {
    return type;
}

