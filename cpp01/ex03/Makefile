# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/21 15:37:00 by chbouthe          #+#    #+#              #
#    Updated: 2024/02/23 19:01:13 by chbouthe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = HUMANS

SRCS = main.cpp \
		Weapon.cpp\
		HumanA.cpp\
		HumanB.cpp

COMP = c++

OBJS = $(SRCS:.cpp=.o)

RM = rm -rf

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

%.o:%.cpp
	c++ $(CPPFLAGS) -I./ -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(COMP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)