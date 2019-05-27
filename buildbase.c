/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buildbase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 21:11:25 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/26 23:21:06 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*buildbase(int block_nbr)
{
	int		nbr;
	int		i;
	char	*base;

	i = 0;
	nbr = 3;
	while (nbr < 12)
	{
		if (block_nbr * 4 <= nbr * nbr)
			break;
		nbr++;
	}
	if (!(base = ft_strnew(nbr * (nbr + 1) + 1)))
		return (NULL);
	ft_memset((void *)base, '.', nbr * (nbr + 1) + 1);
	base[nbr * (nbr + 1)] = '\n';
	while (i++ < nbr)
		base[(nbr + 1) * i - 1] = '\n';
	return (base);
}
