# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 20:12:34 by manuelbeele       #+#    #+#              #
#    Updated: 2021/12/15 13:12:20 by manuelbeele      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_gnl

SRCS = ./main.c
SRCS += ../gnl/get_next_line.c

CC = clang

FLAGS = -Wall -Wextra -Werror -c

all: $(NAME)

$(NAME):
	make -C ../gnl/libft/
	$(CC) $(FLAGS) -I ../gnl/libft/includes -o ../gnl/get_next_line.o -c ../gnl/get_next_line.c
	$(CC) $(FLAGS) -I ../gnl/libft/includes -o main.o -c main.c
	$(CC) -o $(NAME) main.o ../gnl/get_next_line.o -I ../gnl/libft/includes -I ../gnl/ -L ../gnl/libft/ -lft
	./$(NAME) test1 test2 test3 test4 test5 test6 test7 test8 test9 test10 test11 test12 test13 42

clean:
	rm -f *.o
	rm -f ../*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
