/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:45:26 by manuelbeele       #+#    #+#             */
/*   Updated: 2022/01/10 10:54:49 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "../get_next_line.h"
#include "../libft/includes/libft.h"

void test(char *line, char *str, int *testnbr)
{
	if (!ft_strcmp(line, str))
		printf("\033[0;32m" "Test %d: ok!\n", (*testnbr + 1));
	else
		printf("\033[0;31m" "Test %d: fail\n", (*testnbr + 1));
	*testnbr += 1;
}

int main(int argc, char **argv)
{
	int		fd;
	int		fd2;
	int		fd3;
	int		fd4;
	int		fd5;
	int		fd6;
	int		fd7;
	int		fd8;
	int		fd9;
	int		fd10;
	int		fd11;
	int		fd12;
	int		fd13;
	int		fd14;
	int		i;
	char	*line;
	char	*result[28];
	int		nbr;

	result[0] = "12345678";
	result[1] = "12345678";
	result[2] = "12345678";
	result[3] = "12345678";
	result[4] = "12345678";
	result[5] = "12345678";
	result[6] = "12345678";
	result[7] = "12345678";
	result[8] = "1234567812345678";
	result[9] = "1234567812345678";
	result[10] = "1234567812345678";
	result[11] = "1234567812345678";
	result[12] = "1234567812345678";
	result[13] = "1234567812345678";
	result[14] = "1234567812345678";
	result[15] = "1234";
	result[16] = "1234";
	result[17] = "5678";
	result[18] = "1234";
	result[19] = "5678";
	result[20] = "1234";
	result[21] = "5678";
	result[22] = "12345678";
	result[23] = "1234567812345678";
	result[24] = "1234";
	result[25] = "12345678";
	result[26] = "1234567812345678";
	result[27] = "12345678";
	
	nbr = 0;
	if (argc > 1)
	{
		fd = open(argv[1], O_RDONLY);
		fd2 = open(argv[2], O_RDONLY);
		fd3 = open(argv[3], O_RDONLY);
		fd4 = open(argv[4], O_RDONLY);
		fd5 = open(argv[5], O_RDONLY);
		fd6 = open(argv[6], O_RDONLY);
		fd7 = open(argv[7], O_RDONLY);
		fd8 = open(argv[8], O_RDONLY);
		fd9 = open(argv[9], O_RDONLY);
		fd10 = open(argv[10], O_RDONLY);
		fd11 = open(argv[11], O_RDONLY);
		fd12 = open(argv[12], O_RDONLY);
		fd13 = open(argv[13], O_RDONLY);
		fd14 = open(argv[14], O_RDONLY);
		i = 0;
		while (get_next_line(fd, &line) == 1)
			test(line, result[nbr], &nbr);
		while (get_next_line(fd2, &line) == 1)
			test(line, result[nbr], &nbr);
		while (get_next_line(fd3, &line) == 1)
			test(line, result[nbr], &nbr);
		while (get_next_line(fd4, &line) == 1)
			test(line, result[nbr], &nbr);
		while (get_next_line(fd5, &line) == 1)
			test(line, result[nbr], &nbr);
		while (get_next_line(fd6, &line) == 1)
			test(line, result[nbr], &nbr);
		while (get_next_line(fd7, &line) == 1)
			test(line, result[nbr], &nbr);
		while (get_next_line(fd8, &line) == 1)
			test(line, result[nbr], &nbr);
		while (get_next_line(fd9, &line) == 1)
			test(line, result[nbr], &nbr);
		while (get_next_line(fd10, &line) == 1)
			test(line, result[nbr], &nbr);
		while (get_next_line(fd11, &line) == 1)
			test(line, result[nbr], &nbr);
		while (get_next_line(fd12, &line) == 1)
			test(line, result[nbr], &nbr);
		while (get_next_line(fd13, &line) == 1)
			test(line, result[nbr], &nbr);
		printf("%d\n", get_next_line(fd14, &line));
		close(fd);
		close(fd2);
		close(fd3);
		close(fd4);
		close(fd5);
		close(fd6);
		close(fd7);
		close(fd8);
		close(fd9);
		close(fd10);
		close(fd11);
		close(fd12);
		close(fd13);

		fd = open(argv[3], O_RDONLY);
		fd2 = open(argv[6], O_RDONLY);
		get_next_line(fd, &line);
		test(line, result[nbr], &nbr);
		get_next_line(fd2, &line);
		test(line, result[nbr], &nbr);
		get_next_line(fd, &line);
		test(line, result[nbr], &nbr);
	}
	return (0);
}