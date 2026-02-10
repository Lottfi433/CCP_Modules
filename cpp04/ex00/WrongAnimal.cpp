/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:22:20 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/02/08 11:25:45 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    type = "WrongAnimal";
    std::cout << "WrongAnimal Default constructor Called." << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& other){
    type = other.type;
    std::cout << "WrongAnimal copy constructor called." << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}
WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor called" << std::endl;
}
void    WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal makes a strange sound" << std::endl;
}