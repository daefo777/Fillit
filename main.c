/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 22:05:37 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/21 22:28:10 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		validcheck(int fd) 
{

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		open (av[1], O_RDONLY);
		validcheck(fd);
		// assemble(??)
	}
	write (1, "Usage
