/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:17:07 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/02/10 10:53:56 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog Default constructor Called." << std::endl;
}
Dog::Dog(const Dog& other) : Animal(other){
    brain = new Brain(*other.brain);
    std::cout << "Dog copy constructor called." << std::endl;
}
Dog& Dog::operator=(const Dog& other){
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &other){
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}
Dog::~Dog(){
    delete brain;
    std::cout << "Dog Destructor called" << std::endl;
}
void    Dog::makeSound() const{
    std::cout << "Dog is Barking!" << std::endl;
}