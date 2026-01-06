/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 10:42:53 by yazlaigi          #+#    #+#             */
/*   Updated: 2025/12/14 10:52:43 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>
#include <string.h>
#include <iomanip>

class PhoneBook{
private:
    Contact contacts[8];
    int count;
    int next_index;

    std::string formatField(const std::string &s) const;
public:
    PhoneBook();
    
    void    addContact();
    void    searchContacts();
};

#endif