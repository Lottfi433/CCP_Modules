/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 09:32:25 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/11 10:09:50 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
    Harl harl;
    std::string input;

    if (ac != 2){
        std::cout << "Harl need only one param!" << std::endl;
        return 1;
    }
    input = av[1];
    if (input != "DEBUG" && input != "INFO" 
        && input != "WARNING" && input != "ERROR"){
            std::cout << "Wrong input." << std::endl;
            return 1;
        }
    harl.complain(input);
}