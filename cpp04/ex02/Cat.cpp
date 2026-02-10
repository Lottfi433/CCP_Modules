/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:17:48 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/02/10 10:48:36 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat Default constructor Called." << std::endl;
}
Cat::Cat(const Cat& other) : Animal(other){
    brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor called." << std::endl;
}
Cat& Cat::operator=(const Cat& other){
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &other){
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}
Cat::~Cat(){
    delete brain;
    std::cout << "Cat Destructor called" << std::endl;
}
void    Cat::makeSound() const{
    std::cout << "Cat is meowing!" << std::endl;
}