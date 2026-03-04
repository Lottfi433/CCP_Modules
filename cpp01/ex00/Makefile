# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yasserlotfi <yasserlotfi@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/31 11:36:18 by yasserlotfi       #+#    #+#              #
#    Updated: 2025/12/31 12:41:27 by yasserlotfi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = Zombie.hpp
SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
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
