NAME = Bureaucrat

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = intern.cpp\
		Bureaucrat.cpp\
		AForm.cpp\
		main.cpp\
		Presidential.cpp\
		Robotomy.cpp\
		Shrubbery.cpp\

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
	$(RM) $(NAME)

fclean:	clean
	$(RM) $(NAME)

re: fclean
	$(NAME)