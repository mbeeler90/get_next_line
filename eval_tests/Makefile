# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 20:12:34 by manuelbeele       #+#    #+#              #
#    Updated: 2022/01/10 09:30:32 by mbeeler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_gnl

SRCS = ./main.c
SRCS += ../get_next_line.c

CC = clang

FLAGS = -Wall -Wextra -Werror -c

all: $(NAME)

$(NAME):
	make -C ../libft/
	$(CC) $(FLAGS) -I ../libft/includes -o ../get_next_line.o -c ../get_next_line.c
	$(CC) $(FLAGS) -I ../libft/includes -o main.o -c main.c
	$(CC) -o $(NAME) main.o ../get_next_line.o -I ../libft/includes -I ../ -L ../libft/ -lft
	./$(NAME) test1 test2 test3 test4 test5 test6 test7 test8 test9 test10 test11 test12 test13 42

clean:
	rm -f *.o
	rm -f ../*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
