NAME = Bureaucrat

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = *.cpp

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