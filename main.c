/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 22:05:37 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/26 15:54:58 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	int		fd;
	char	*line;
	char	**block;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (!(line = ft_strnew(0)))
				exit(1);
		block = read_fillit(fd, line);
		if (!block)
		{
			ft_putstr("error\n");
			exit(1);
		}
		int	i = -1;
		while (block[++i])
			printf("block[%d] =\n%s", i, block[i]);
		//assemble(block);
		close(fd);
		exit (0);
	}
	ft_putstr("usage: ");
	ft_putstr(av[0]);
	ft_putstr(" [input_file] (only one argument is accecptable)\n");
	exit (1);
}
