/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:32:41 by yazlaigi          #+#    #+#             */
/*   Updated: 2025/12/17 10:57:14 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main ()
{
    PhoneBook phonebook;
    std::string command;


    while (true)
    {
        std::cout << "Enter Command (ADD, SEARCH, EXIT) :";
        if (!std::getline(std::cin,command))
            break;
        if (command == "ADD")
        {
            phonebook.addContact();
            if (std::cin.eof())
                break;
        }
        else if (command == "SEARCH")
        {
            phonebook.searchContacts();
            if (std::cin.eof())
                break;
        }
        else if (command.empty() || command == "EXIT")
            break;
        else
            std::cout << "Unknown command !" << std::endl;
    }
    return 0;
}