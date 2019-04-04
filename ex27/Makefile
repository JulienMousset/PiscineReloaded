# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmousset <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/04 10:49:27 by jmousset          #+#    #+#              #
#    Updated: 2019/04/04 15:37:22 by jmousset         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

FLAGS = -Wall -Wextra -Werror

SRC = ft_putchar.c\
	  ft_putstr.c\
	  ft_display_file.c

OBJ = ft_putchar.o ft_putstr.o ft_display_file.o

HDR = ft_display_file.h

all : $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I $(HDR)
	gcc -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
