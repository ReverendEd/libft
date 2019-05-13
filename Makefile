# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/02 13:24:24 by tsehr             #+#    #+#              #
#    Updated: 2019/05/02 15:42:51 by tsehr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
FILES=ft_atoi.c ft_bzero.c ft_isalnum.c \
	ft_isalpha.c ft_isascii.c ft_memccpy.c \
	ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_print.c \
	ft_strcat.c ft_strcmp.c ft_strcpy.c \
	ft_strdup.c ft_strlcat.c ft_strlen.c \
	ft_strncat.c ft_strncmp.c ft_strncpy.c \
	ft_strnstr.c ft_strrchr.c ft_strstr.c \
	ft_tolower.c ft_toupper.c 

OBJ= $(patsubst %.c,%.o,$(FILES))

all: $(NAME)

$(NAME): $(FILES) libft.h
	gcc -Wall -Wextra -Werror -I. libft.h -c $(FILES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

test:
	gcc -Wall -Wextra -Werror test.c 

libtest:
	gcc -Wall -Wextra -Werror test.c -L. -lft


verycooltest:
	gcc -g -fsanitize=address -Wall -Wextra -Werror test.c

