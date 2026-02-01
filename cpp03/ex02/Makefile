# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/31 09:49:53 by yazlaigi          #+#    #+#              #
#    Updated: 2026/01/31 10:43:02 by yazlaigi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp
HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean