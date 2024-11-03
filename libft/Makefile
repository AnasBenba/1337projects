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

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
CFILESM = ft_atoi.c ft_isascii.c ft_memcmp.c ft_putendl_fd.c ft_strdup.c ft_strlen.c ft_strtrim.c \
ft_bzero.c ft_isdigit.c ft_memcpy.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_substr.c \
ft_calloc.c ft_isprint.c ft_memmove.c ft_putstr_fd.c ft_strjoin.c ft_strncmp.c ft_tolower.c \
ft_isalnum.c ft_itoi.c ft_memset.c ft_split.c ft_strlcat.c ft_strnstr.c ft_toupper.c \
ft_isalpha.c ft_memchr.c ft_putchar_fd.c ft_strchr.c ft_strlcpy.c ft_strrchr.c \


OBJM = ft_atoi.o ft_isascii.o ft_memcmp.o ft_putendl_fd.o ft_strdup.o ft_strlen.o ft_strtrim.o \
ft_bzero.o ft_isdigit.o ft_memcpy.o ft_putnbr_fd.o ft_striteri.o ft_strmapi.o ft_substr.o \
ft_calloc.o ft_isprint.o ft_memmove.o ft_putstr_fd.o ft_strjoin.o ft_strncmp.o ft_tolower.o \
ft_isalnum.o ft_itoi.o ft_memset.o ft_split.o ft_strlcat.o ft_strnstr.o ft_toupper.o \
ft_isalpha.o ft_memchr.o ft_putchar_fd.o ft_strchr.o ft_strlcpy.o ft_strrchr.o \

CBONUS = ft_lstadd_back.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstsize.c \
ft_lstadd_front.c ft_lstdelone.c ft_lstlast.c ft_lstnew.c

OBONUS = ft_lstadd_back.o ft_lstclear.o ft_lstiter.o ft_lstmap.o ft_lstsize.o \
ft_lstadd_front.o ft_lstdelone.o ft_lstlast.o ft_lstnew.o

all: $(NAME)

$(NAME): $(OBJM)
	ar rcs $(NAME) $(OBJM)
	
$(OBJM): $(CFILESM)
		$(CC) $(CFLAGS) -c $(CFILESM)

bonus: $(OBJM) $(OBONUS)
		ar rcs $(NAME) $(OBONUS)
$
$(OBONUS): $(CBONUS)
		$(CC) $(CFLAGS) -c $(CBONUS)

clean:
		rm -f $(OBJM) $(OBONUS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
