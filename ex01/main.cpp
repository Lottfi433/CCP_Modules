/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:32:41 by yazlaigi          #+#    #+#             */
/*   Updated: 2025/12/16 13:01:56 by yazlaigi         ###   ########.fr       */
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
        std::getline(std::cin, command);
        if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.searchContacts();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Unknown command !" << std::endl;
    }
    return 0;
}