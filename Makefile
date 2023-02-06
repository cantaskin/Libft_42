# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ataskin <ataskin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 05:19:58 by ataskin           #+#    #+#              #
#    Updated: 2023/01/23 05:19:59 by ataskin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = $(wildcard ./source/ft_*.c)

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)

re : fclean all

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

.PHONY : all bonus clean fclean re
