#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jye <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 19:57:29 by jye               #+#    #+#              #
#    Updated: 2016/11/03 13:29:21 by jye              ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
GCC = clang
INC = ./includes/
FLAG = -Wall -Werror -Wextra -c

all : libft.a

libft.a :
	$(GCC) $(FLAG) $(SRC) -I $(INC)
	ar -rcs $@ $(OBJ)
clean :
	/bin/rm -rf ft_putchar.o
	/bin/rm -rf ft_putstr.o
	/bin/rm -rf ft_strcmp.o
	/bin/rm -rf ft_strlen.o
	/bin/rm -rf ft_swap.o
fclean : clean 
	/bin/rm -rf libft.a
re : fclean all