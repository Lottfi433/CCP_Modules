/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacing.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:24:26 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/01/06 12:32:42 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string replace(std::string& content, std::string& s1, std::string& s2){
    if (s1.empty())
        return content;
    std::string result;
    size_t pos = 0;
    size_t found = 0;
    while ((found = content.find(s1, pos)) != std::string::npos)
    {
        result += content.substr(pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }
    result += content.substr(pos);
    return result;
}