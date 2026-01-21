/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:24:32 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/15 11:16:55 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return _rawBits;
}

void Fixed::setRawBits( int const raw ){
    _rawBits = raw;
}

Fixed::Fixed(){
    _rawBits = 0;
    std::cout << "Default constructor called" << std::endl;  
}
Fixed::Fixed(const Fixed& other){
        std::cout << "Copy constructor called" << std::endl;
        _rawBits = other._rawBits;
}
Fixed&  Fixed::operator=(const Fixed& other){
        std::cout << "Copy assignment operator called" << std::endl;
        if (this != &other)
            _rawBits = other._rawBits;
        return *this;
}
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}