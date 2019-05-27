/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assemble.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 16:14:39 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/26 23:22:26 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		assemble(char **block, int block_nbr)
{
	int		i;
	int		j;
	int		k;
	char	*base;

	i = 0;
	j = 0;
	k = 0;
	base = buildbase(block_nbr);
	if (!base)
	{
		ft_strdel(&base);
		while (i < block_nbr)
			ft_strdel(&block[i++]);
		free(block);
		block = NULL;
		return (-1);
	}
	printf("start base =\n%s", base);
	while (block[i])
	{
		while (block[i][j])
		{
			if (block[i][j] == '#')
				base[k] = block[i][j];
			j++;
			k++;
		}
		i++;
	}
	return (1);
}
