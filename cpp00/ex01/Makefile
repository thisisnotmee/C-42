# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/15 14:20:45 by chbouthe          #+#    #+#              #
#    Updated: 2024/02/18 16:28:15 by chbouthe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

COMPIL = g++

RM = rm -rf

FLAGS = -Wall -Werror -Wextra -std=c++98

%.o : %.cpp
	@$(FILES) $(FLAGS) -c $< -o $@

FILES = main.cpp \
			Contacts.cpp\
			Phonebook.cpp

OBJS = $(FILES:.cpp=.o)

all :
	$(COMPIL) $(FLAGS) $(FILES) -o $(NAME)
	@echo "Compilation OK"

clean :
	$(RM) ./Objs/*.o
	$(RM) $(NAME)

fclean :
	$(RM) ./Objs/*.o
	$(RM) $(NAME)

re :
	all clean