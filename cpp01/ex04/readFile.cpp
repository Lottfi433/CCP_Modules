/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readFile.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:23:07 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/06 11:23:22 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string ReadFile(std::string filename){
    std::ifstream infile(filename);
    if(!infile)
        return "";
    std::string line;
    std::string content;
    while (std::getline(infile, line))
    {
        content += line;
        content += '\n';
    }
    infile.close();
    return content;
}
