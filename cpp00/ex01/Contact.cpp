/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 09:56:36 by yazlaigi          #+#    #+#             */
/*   Updated: 2025/12/14 11:11:48 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(const std::string &s)
{
    first_name = s;
}

void Contact::setLastName(const std::string &s)
{
    last_name = s;
}

void Contact::setNickName(const std::string &s)
{
    nick_name = s;
}

void Contact::setPhoneNumber(const std::string &s)
{
    phone_number = s;
}

void Contact::setDarkestSecret(const std::string &s)
{
    darkest_secret = s;
}

std::string Contact::getFirstName() const
{
    return first_name;
}

std::string Contact::getLastName() const
{
    return last_name; 
}

std::string Contact::getNickName() const
{
    return nick_name;
}

std::string Contact::getPhoneNumber() const
{
    return phone_number;
}

std::string Contact::getDarkestSecret() const
{
    return darkest_secret;
}