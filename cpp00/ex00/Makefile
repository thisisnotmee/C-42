NAME = megaphone

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -g -std=c++98
SRC = ./megaphone.cpp
OBJ = $(SRC:.cpp=.o)

RM = rm -rf

all : $(NAME)

%.o:%.cpp
	g++ $(CPPFLAGS) -I./ -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean
	$(NAME)
