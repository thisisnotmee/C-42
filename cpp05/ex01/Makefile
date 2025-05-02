NAME = EX01_EXEC

FLAGS = -Wall -Werror -Wextra -std=c++98

CPP_FILES = *.cpp

OBJ_FILES = *.o

RM = rm -rf

all :
	@make clean; clear
	@c++ $(FLAGS) $(CPP_FILES) -c
	@c++ $(FLAGS) $(OBJ_FILES) -o $(NAME)
	@echo "Compilation terminée";
	@echo "Lancement du programme"; sleep 1; clear; ./$(NAME)

clean :
	@$(RM) $(OBJ_FILES)
	@$(RM) $(NAME)

re :
	@$(CLEAN)
	@$(ALL)

