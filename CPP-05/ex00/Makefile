NAME = BUREAU-CRAT

FLAGS = -Wall -Werror -Wextra -std=c++98

COMP = c++

CPP_FILES = *.cpp
OBJ_FILES = *.o

RM = rm -rf

all :
	@ $(COMP) $(FLAGS) $(CPP_FILES) -o $(NAME)

clean :
	@$(RM) $(OBJ_FILES)
	@$(RM) $(NAME)

re :
	@$(CLEAN)
	@$(ALL)

