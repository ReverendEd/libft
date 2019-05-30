# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsehr <tsehr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/02 13:24:24 by tsehr             #+#    #+#              #
#    Updated: 2019/05/29 22:00:51 by tsehr            ###   ########.fr        #
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
	ft_tolower.c ft_toupper.c ft_isdigit.c \
	ft_isprint.c ft_strchr.c ft_memalloc.c \
	ft_memdel.c ft_strnew.c ft_strdel.c \
	ft_strclr.c ft_striter.c ft_striteri.c \
	ft_strmap.c ft_strmapi.c ft_strequ.c \
	ft_strnequ.c ft_strsub.c ft_strjoin.c \
	ft_strtrim.c ft_strsplit.c ft_itoa.c \
	ft_putchar.c ft_putstr.c ft_putendl.c \
	ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_lstadd.c \
	ft_lstdel.c ft_lstdelone.c ft_lstiter.c \
	ft_lstmap.c ft_lstnew.c

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

# test:
# 	gcc -Wall -Wextra -Werror test.c 

# libtest:
# 	gcc -Wall -Wextra -Werror test.c -L. -lft


# verycooltest:
# 	gcc -g -fsanitize=address -Wall -Wextra -Werror test.c

