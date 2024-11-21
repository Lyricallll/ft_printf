# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agraille <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 10:28:37 by agraille          #+#    #+#              #
#    Updated: 2024/11/21 13:07:16 by agraille         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Wextra -Werror
HEADER = ft_printf.h
SRC =./ft_printf.c\
	./ft_itoa.c\
	./ft_print_valid.c\
	# ./ft_print_hexa.c

OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -I . -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all re fclean clean
