/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 22:05:37 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/23 13:21:38 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	int		fd;

	if (ac == 2)
	{
		fd = open (av[1], O_RDONLY);
		if (read_fillit(fd))
		// assemble(??)
		else
			ft_putstr("error\n");
		close(fd);
		exit (0);
	}
	ft_putstr("usage: ");
	ft_putstr(av[0]);
	ft_putstr(" sample_file (only 1 samplefile is accecptable)\n");
	exit (1);
}
