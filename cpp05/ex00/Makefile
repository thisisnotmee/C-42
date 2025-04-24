NAME = BUREAU-CRAT

FLAGS = -Wall -Werror -Wextra -std=c++98

CPP_FILES = *.cpp

OBJ_FILES = *.o

RM = rm -rf

all :
	@make clean; sleep 1; clear
	@c++ $(FLAGS) $(CPP_FILES) -c
	@clear; echo "Compilation des objects effectuée"
	@c++ $(FLAGS) $(OBJ_FILES) -o $(NAME)
	@echo "Fin";

clean :
	@$(RM) $(OBJ_FILES)
	@$(RM) $(NAME)

re :
	@$(CLEAN)
	@$(ALL)

