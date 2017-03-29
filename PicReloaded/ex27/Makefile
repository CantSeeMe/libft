#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jye <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 20:49:06 by jye               #+#    #+#              #
#    Updated: 2016/11/03 19:05:51 by jye              ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRC = main.c
OBJ = main.o
CC = gcc
FLAG = -Wall -Werror -Wextra

all : ft_display_file

ft_display_file : 
	$(CC) $(FLAG) -c $(SRC)
	$(CC) $(OBJ) -o $@
clean :
	/bin/rm -rf $(OBJ)
fclean : clean
	/bin/rm -rf ft_display_file
re : fclean all