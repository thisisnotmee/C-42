# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 15:14:05 by chbouthe          #+#    #+#              #
#    Updated: 2024/03/06 15:36:24 by chbouthe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = CLAP_TRAP

CC = g++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = ./src/ClapTrap.cpp\
		./src/main.cpp

OBJ = $(SRCS:.cpp=.o)

RM = rm -rf

all : $(NAME)

%.o:%.cpp
	c++ $(CPPFLAGS) -I./ -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) ./*.o

fclean:	clean
	$(RM) $(NAME)

re: fclean
	$(NAME)