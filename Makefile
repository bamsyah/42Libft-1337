# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 04:55:30 by bamsyah           #+#    #+#              #
#    Updated: 2022/11/14 15:27:03 by bamsyah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_calloc.c  ft_isdigit.c ft_memcmp.c  ft_strchr.c  ft_strlcpy.c ft_strrchr.c ft_toupper.c \
	ft_isalnum.c ft_isprint.c ft_memcpy.c  ft_strdup.c  ft_strlen.c  ft_strtrim.c \
	ft_atoi.c    ft_isalpha.c   ft_memmove.c ft_strjoin.c ft_strncmp.c ft_substr.c \
	ft_bzero.c   ft_isascii.c ft_memchr.c  ft_memset.c  ft_strlcat.c ft_strnstr.c ft_tolower.c \
	ft_itoa.c  ft_putchar_fd.c  ft_putstr_fd.c  ft_putendl_fd.c  ft_putnbr_fd.c ft_split.c ft_strmapi.c \
	ft_striteri.c

OBJ = ft_calloc.o  ft_isdigit.o ft_memcmp.o  ft_strchr.o  ft_strlcpy.o ft_strrchr.o ft_toupper.o \
	ft_isalnum.o ft_isprint.o ft_memcpy.o  ft_strdup.o  ft_strlen.o  ft_strtrim.o \
	ft_atoi.o    ft_isalpha.o   ft_memmove.o ft_strjoin.o ft_strncmp.o ft_substr.o \
	ft_bzero.o   ft_isascii.o ft_memchr.o  ft_memset.o  ft_strlcat.o ft_strnstr.o ft_tolower.o \
	ft_itoa.o  ft_putchar_fd.o  ft_putstr_fd.o ft_putendl_fd.o  ft_putnbr_fd.o ft_split.o ft_strmapi.o \
	ft_striteri.o

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
