/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assemble.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 16:14:39 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/28 22:56:09 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**assemble(char **block, int block_nbr)
{
	int		i;
	int		nbr;
	char	**base;

	i = -1;
	nbr = 3;
	while (++i < block_nbr)
	{
		if (block_nbr * 4 < nbr * nbr)
			break;
		nbr++;
	}
	base = buildbase(nbr);
	base[0][0] = block[0][0];	
	return (base);
}
