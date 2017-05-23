# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afanneau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 17:04:15 by afanneau          #+#    #+#              #
#    Updated: 2016/11/03 19:45:47 by afanneau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADERS = ./includes
SRCS =  ./srcs/ft_putchar.c \
		./srcs/ft_putstr.c \
		./srcs/ft_strcmp.c \
		./srcs/ft_strlen.c \
		./srcs/ft_swap.c
OBJECTS =	./ft_putchar.o \
			./ft_putstr.o \
			./ft_strcmp.o \
			./ft_strlen.o \
			./ft_swap.o	  

all : $(NAME)

$(NAME) :
	gcc -c $(SRCS) $(HEADERS)
	ar rc $(NAME) $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all
