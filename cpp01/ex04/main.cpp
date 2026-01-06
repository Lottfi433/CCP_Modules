/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:02:45 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/06 12:54:58 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"


int main (int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "bad usage : <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string fileContent = ReadFile(filename);
    if (fileContent.empty())
    {
        std::cout << "Error in file reading!" << std::endl;
        return 1;
    }
    std::string result = replace(fileContent, s1, s2);
    std::ofstream outfile(filename + ".replace");
    if (!outfile)
    {
        std::cout << "Error creating output file!" << std::endl;
        return 1;
    }
    outfile << result;
    outfile.close();
}