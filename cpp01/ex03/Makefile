# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/03 10:53:15 by yazlaigi          #+#    #+#              #
#    Updated: 2026/01/03 13:14:29 by yazlaigi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp
SRC = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean