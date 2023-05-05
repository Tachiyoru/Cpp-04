NAME		=	Polymorphisme

GREEN		=	\033[1;32m
RED			=	\033[1;31m
DEFAULT		=	\033[0m

OBJ_DIR		=	objs
SRC_DIR		=	$(shell find . -type d)

vpath %.cpp $(foreach dir, $(SRC_DIR), $(dir):)

HEADER		=	Animal.hpp		\
				Cat.hpp			\
				Dog.hpp			\
				WrongAnimal.hpp	\
				WrongCat.hpp

SRCS		 =	main.cpp		\
				Animal.cpp		\
				Cat.cpp			\
				Dog.cpp			\
				WrongAnimal.cpp	\
				WrongCat.cpp

OBJS		=	$(SRCS:%.cpp=${OBJ_DIR}/%.o)

RM			=	rm -rf

CC			=	c++

CFLAGS		=	-Werror -Wall -Wextra -std=c++98 -g3

all:	${NAME}

$(NAME): ${OBJS} ${HEADER}
		@${CC} ${CFLAGS} ${OBJS} -o ${NAME}
		@echo "$(GREEN)##### Polymorphisme compiling finished! #####$(DEFAULT)"

$(OBJ_DIR)/%.o: %.cpp ${HEADER} | $(OBJ_DIR)
		@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR) :
		@mkdir -p $@

clean:
		@${RM} $(OBJ_DIR)

fclean:		clean
		@${RM} ${NAME}
		@echo "\n${GREEN}Everything cleaned${DEFAULT}"

re:			fclean
		@$(MAKE) all -j

.PHONY:		all clean fclean re
