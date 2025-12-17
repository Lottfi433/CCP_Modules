/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 10:39:15 by yazlaigi          #+#    #+#             */
/*   Updated: 2025/12/11 09:35:03 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac,char **av)
{
    if (ac == 1)
    {
        std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return 0;
    }
    else if (ac > 1)
    {
        for (int i = 1; i < ac; i++)
        {
            for (int j = 0; av[i][j]; j++)
            {
                if (av[i][j] >= 'a' && av[i][j] <= 'z')
                    av[i][j] -= 32;
                std::cout << av[i][j];
            }
        }
    }
    return (0);
}