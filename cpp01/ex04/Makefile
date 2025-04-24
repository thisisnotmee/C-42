# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 14:58:36 by chbouthe          #+#    #+#              #
#    Updated: 2024/02/23 16:30:27 by chbouthe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = SED_IS_FOR_LOSERS

SRCS = main.cpp

FILES = file.replace \

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