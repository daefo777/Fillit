/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 22:05:37 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/26 22:56:06 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	int		fd;
	char	*line;
	char	**block;
	int		start;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd < 0 || !(line = ft_strnew(0)))
				exit(1);
		block = read_fillit(fd, line, &start);
		if (!block)
		{
			ft_putstr("error\n");
			exit(1);
		}
		if (!assemble(block, start))
			exit(1);
		close(fd);
		exit (0);
	}
	ft_putstr("usage: ");
	ft_putstr(av[0]);
	ft_putstr(" [input_file] (only one argument is accecptable)\n");
	exit (1);
}
