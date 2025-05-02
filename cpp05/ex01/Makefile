NAME = Bureaucrat

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = ./Bureaucrat.cpp \
		./Form.cpp \
		main.cpp

OBJ = $(SRCS:.cpp=.o)

RM = rm -rf

all : $(NAME)
	@./$(NAME)

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