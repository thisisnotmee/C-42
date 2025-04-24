NAME = ANIMAL

SRCS = main.cpp \
		Fixed.cpp

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