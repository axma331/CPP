NAME			:=	animal
RM				:=	rm -rf

CXX				:=	clang++
CXXFLAGS		:=	-std=c++98
CXXFLAGS		+=	-Wall -Wextra -Werror -Wshadow
# CXXFLAGS		+=	-g -fsanitize=address

HEADER_DIR		:=	./includes/
HEADER			:=	$(addprefix $(HEADER_DIR), 	Animal.hpp	Cat.hpp	Dog.hpp Brain.hpp)

SRC_DIR			:=	./srcs/
SRC				:=	Animal.cpp	Cat.cpp	Dog.cpp	Brain.cpp main.cpp

OBJ_DIR			:=	./.objs/
OBJ				:=	$(addprefix $(OBJ_DIR), $(notdir $(SRC:%.cpp=%.o)))

all:			$(NAME)		Makefile

$(NAME):		$(OBJ)
				$(CXX) $(OBJ) -o $@

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp	$(HEADER)	|$(OBJ_DIR)
				$(CXX) $(CXXFLAGS) -I $(HEADER_DIR) -c $< -o $@

$(OBJ_DIR):
				@mkdir -p $@

clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME)
				$(RM) $(OBJ_DIR)

re:				fclean all

# gitpush:		fclean
# 				sh .gitpush || {											\
# 				echo '#!/bin/sh'									> .gitpush;\
# 				echo 'grep -Fx .gitpush .gitignore > /dev/null \'	>> .gitpush;\
# 				echo '|| echo .gitpush >> .gitignore;'				>> .gitpush;\
# 				echo 'git status'									>> .gitpush;\
# 				echo 'git add .'									>> .gitpush;\
# 				echo 'git status'									>> .gitpush;\
# 				echo 'echo Enter commits name: '					>> .gitpush;\
# 				echo 'read commits_name'							>> .gitpush;\
# 				echo 'git commit -m "$$commits_name"'				>> .gitpush;\
# 				echo 'git push'										>> .gitpush;\
# 				sh .gitpush;}
# 				$(RM) .gitpush

.PHONY: 		clean fclean re all