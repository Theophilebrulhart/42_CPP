# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbrulhar <tbrulhar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 11:08:44 by tbrulhar          #+#    #+#              #
#    Updated: 2023/01/23 16:02:43 by tbrulhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp convert.cpp whichType.cpp print.cpp
OBJ = $(SRC:.cpp=.o) 
GPP = c++ 
RM = rm -f 
GFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = convert

all: $(NAME) 

$(NAME): $(OBJ)
		$(GPP) $(GFLAGS) -o $(NAME) $(OBJ) 

clean: 
		$(RM) $(OBJ) 

fclean: clean 
		$(RM) $(NAME) 

re: fclean $(NAME) 

.PHONY:        all clean fclean re