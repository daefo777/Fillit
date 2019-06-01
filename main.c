/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 22:05:37 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/30 21:22:24 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	int		fd;
	int		block_nbr;
	char	*line;
	char	*base;
	char	**block;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd < 0 || !(line = ft_strnew(0)) || \
			!(block = read_fillit(fd, line, &block_nbr)) \
			|| !(base = assemble(block, block_nbr)))
		{
			ft_putstr("error\n");
			exit(1);
		}
		else
			ft_putstr(base);
		close(fd);
		exit (0);
	}
	ft_putstr("usage: ");
	ft_putstr(av[0]);
	ft_putstr(" [input_file] (only one argument is accecptable)\n");
	exit (1);
}
