/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 12:53:58 by yazlaigi          #+#    #+#             */
/*   Updated: 2026/02/10 10:11:43 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Default constructor Called." << std::endl;
}
Brain::Brain(const Brain& other){
    std::cout << "Brain copy constructor called." << std::endl;
    for (int i = 0;i < 100; i++){
        ideas[i] = other.ideas[i];
    }
}
Brain& Brain::operator=(const Brain& other){
    std::cout << "Brain Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0;i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return *this;
}
Brain::~Brain(){
    std::cout << "Brain Destructor called" << std::endl;
}

void    Brain::setIdea(int index, const std::string& idea){
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100)
        return ideas[index];
    return "";
}