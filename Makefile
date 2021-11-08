# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: liar13cajun <marvin@42.fr>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 15:02:09 by liar13caj         #+#    #+#              #
#    Updated: 2021/10/25 15:08:38 by liar13caj        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
SOURCE = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	 ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
	 ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
	 ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
	 ft_tolower.c ft_toupper.c

OBJ = $(SOURCE:.c=.o)

.PHONY : all clean fclean re

%.o: %.c
		gcc $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)	
		ar -rc $(NAME) $(OBJ)

clean:
		rm -rf $(OBJ) 

fclean: clean
		rm -rf $(NAME)

re: fclean all
