/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:25:59 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/02/08 11:26:29 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    type = "WrongCat";
    std::cout << "WrongCat Default constructor Called." << std::endl;
}
WrongCat::WrongCat(const WrongCat& other){
    type = other.type;
    std::cout << "WrongCat copy constructor called." << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& other){
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}
WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor called" << std::endl;
}
void    WrongCat::makeSound() const{
    std::cout << "WrongCat meows weirdly" << std::endl;
}