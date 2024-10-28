# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenba <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 07:46:39 by abenba            #+#    #+#              #
#    Updated: 2024/10/25 07:46:43 by abenba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
CFLAGS = -Wall -Wextra -Werror
CC = cc
all: cfiles
		$(CC) $(CFLAGS) *.o -o $(NAME)
	
cfiles:
		$(CC) $(CFLAGS) *.c -c
clean:
		rm *.o

fclean: clean
		rm $(NAME)

re: fclean all
