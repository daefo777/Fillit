# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idaeho <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 22:08:03 by idaeho            #+#    #+#              #
#    Updated: 2019/05/26 15:16:42 by idaeho           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fillit

SRCS= main.c read_fillit.c poscheck.c blockcheck.c validcheck.c charcheck.c

OBJECTS= *.o

CC= gcc

FLAGS= -Wall -Wextra -Werror

INCLUDES= -I libft/includes

all: $(NAME)

$(NAME):
	make -C libft fclean && make -C libft	
	$(CC) $(FLAGS) $(INCLUDES) -c $(SRCS)
	$(CC) -o $(NAME) $(OBJECTS) $(INCLUDES) -L libft/ -lft

clean:
	/bin/rm -f $(OBJECTS) 

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all

.PHONY: clean fclean all re
