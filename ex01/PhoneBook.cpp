/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 10:56:23 by yazlaigi          #+#    #+#             */
/*   Updated: 2025/12/17 10:46:10 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string PhoneBook::formatField(const std::string &s) const{
    if (s.length() > 10)
        return s.substr(0, 9) + ".";
    else
        return s;
}
PhoneBook::PhoneBook(){
    count = 0;
    next_index = 0;
}
void    PhoneBook::addContact(){
    std::string input;

    std::cout << "Enter First Name: ";
    if (!std::getline(std::cin, input))
        return;
    while (input.empty())
    {
        std::cout << "emty string! try again." << std::endl;

        if (!std::getline(std::cin, input))
            return;
    }
    contacts[next_index].setFirstName(input);

    std::cout << "Enter Last Name: ";
    if (!std::getline(std::cin, input))
        return;
    while (input.empty())
    {
        std::cout << "emty string! try again." << std::endl;

        if (!std::getline(std::cin, input))
            return;
    }
    contacts[next_index].setLastName(input);

    std:: cout << "Enter Nick Name: ";
    if (!std::getline(std::cin, input))
        return;
    while (input.empty())
    {
        std::cout << "emty string! try again." << std::endl;

        if (!std::getline(std::cin, input))
            return;
    }
    contacts[next_index].setNickName(input);

    std::cout << "Enter Phone Number: ";
    if (!std::getline(std::cin, input))
        return;
    while (input.empty())
    {
        std::cout << "emty string! try again." << std::endl;

        if (!std::getline(std::cin, input))
            return;
    }
    contacts[next_index].setPhoneNumber(input);

    std::cout << "Enter darkest secret: ";
    if (!std::getline(std::cin, input))
        return;
    while (input.empty())
    {
        std::cout << "emty string! try again." << std::endl;
        if (!std::getline(std::cin, input))
            return;
    }
    contacts[next_index].setDarkestSecret(input); 
    next_index = (next_index + 1) % 8;
    if (count < 8)
        count++;
}

void    PhoneBook::searchContacts(){
    if (count == 0)
    {
        std::cout << "There is no contacts yet." << std::endl;
        return;
    }
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nick Name" << "|" << std::endl;

for (int i = 0; i < count; i++)
{
    std::cout << std::setw(10) << i << "|";
    std::cout << std::setw(10) << formatField(contacts[i].getFirstName()) << "|";
    std::cout << std::setw(10) << formatField(contacts[i].getLastName()) << "|";
    std::cout << std::setw(10) << formatField(contacts[i].getNickName())<< "|" << std::endl;
}
std::cout << "Enter Index to display all contact infos: ";
int index;
if (!(std::cin >> index) || index < 0 || index >= count) {
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    std::cout << "Invalid Index!" << std::endl;
    return;
}
std::cin.ignore(10000, '\n');

std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
std::cout << "Nick Name: " << contacts[index].getNickName() << std::endl;
std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
std::cout << "DarkestSecret: " << contacts[index].getDarkestSecret() << std::endl;
}