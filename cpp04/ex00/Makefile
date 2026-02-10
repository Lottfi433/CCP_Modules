# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/07 10:22:30 by yazlaigi          #+#    #+#              #
#    Updated: 2026/02/08 12:53:02 by yazlaigi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Animal.cpp main.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
HEADERS = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
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