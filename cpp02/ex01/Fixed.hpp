/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 10:48:01 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/15 11:26:07 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <math.h>

class Fixed{
private:
    int _rawBits;
    static const int _fractionalBits = 8;
public:
    Fixed();
    Fixed(const Fixed& other);
    Fixed(const int i_number);
    Fixed(const float f_number);
    Fixed& operator=(const Fixed& other);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};
std::ostream& operator<<(std::ostream& out, const Fixed& value);
