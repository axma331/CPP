NAME		:= replace
RM			:= rm -rf

CXX			:= c++
#CXXFLAGS	:= -Wall -Wextra -Werror -g
CXXFLAGS	:= -g
CXXFLAGS	+= -std=c++98

HEADE		:= Replace.hpp
SRC			:= Replace.cpp main.cpp
OBJ			:= $(SRC:%.cpp=%.o)

all: 		$(NAME) Makefile

$(NAME):	$(OBJ)
			$(CXX) $(OBJ) -o $@

%.o:		%.cpp $(HEADE)
			$(CXX) $(CXXFLAGS) -c $< -o $@ 
clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)
		
re:			fclean all

# gitpush:	fclean
# 			sh .gitpush || {											\
# 			echo '#!/bin/sh'									> .gitpush;\
# 			echo 'grep -Fx .gitpush .gitignore > /dev/null \'	>> .gitpush;\
# 			echo '|| echo .gitpush >> .gitignore;'				>> .gitpush;\
# 			echo 'git status'									>> .gitpush;\
# 			echo 'git add .'									>> .gitpush;\
# 			echo 'git status'									>> .gitpush;\
# 			echo 'echo Enter commits name: '					>> .gitpush;\
# 			echo 'read commits_name'							>> .gitpush;\
# 			echo 'git commit -m "$$commits_name"'				>> .gitpush;\
# 			echo 'git push'										>> .gitpush;\
# 			sh .gitpush;}
# 			$(RM) .gitpush

.PHONY: 	clean fclean re all
