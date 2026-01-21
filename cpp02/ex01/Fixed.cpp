/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 10:48:20 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/21 10:07:00 by yazlaigi         ###   ########.fr       */
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
Fixed::Fixed(float f_number){
    _rawBits = roundf(f_number * (1 << _fractionalBits));
}
Fixed::Fixed(int i_number){
    _rawBits = i_number << _fractionalBits;
}
float Fixed::toFloat( void )const{
    return (float)_rawBits / (1 << _fractionalBits);
} 
int Fixed::toInt( void )const {
    return _rawBits >> _fractionalBits;
}
std::ostream& operator<<(std::ostream& out, const Fixed& value)
{
    out << value.toFloat();
    return out;
}
