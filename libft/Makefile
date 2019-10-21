# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chcorrwa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 23:17:51 by chcorrwa          #+#    #+#              #
#    Updated: 2019/10/17 04:07:39 by chcorrwa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

CFLAG = -Wall -Wextra -Werror 

RM = rm -rf

SRC = ft_isalnum.c ft_isprint.c    ft_memcmp.c	ft_substr.c ft_strjoin.c ft_putnbr_fd.c\
		ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c ft_putendl_fd.c\
		ft_itoa.c ft_memcpy.c ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_putstr_fd.c\
		ft_tolower.c ft_bzero.c ft_isascii.c ft_memccpy.c ft_strtrim.c ft_putchar_fd.c \
		ft_memmove.c ft_strdup.c ft_strlen.c ft_strrchr.c ft_split.c ft_strmapi.c \
		ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c ft_itoa.c

OBJ = $(SRC:.c=.o)

$(NAME): $(HEADER)
	gcc $(CFLAG) -c $(SRC)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
