NAME			=	iter
RM				=	rm -rf

CXX				=	c++
CXXFLAGS		=	-std=c++98
CXXFLAGS		+=	-Wall -Wextra -Werror -Wshadow
CXXFLAGS		+=	-g

HEADER_DIR		=	./includes/
HEADER			=	$(addprefix $(HEADER_DIR), Easyfind.hpp)

SRC_DIR			=	./srcs/
SRC				=	main.cpp

OBJ_DIR			=	./.objs/
OBJ				=	$(addprefix $(OBJ_DIR), $(notdir $(SRC:%.cpp=%.o)))

all:			$(NAME)		Makefile

$(NAME):		$(OBJ_DIR) $(OBJ)
				$(CXX) $(OBJ) -o $@

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp	$(HEADER)
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