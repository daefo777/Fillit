/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buildbase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 21:11:25 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/27 21:23:19 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**buildbase(int nbr)
{
	int		i;
	char	**base;

	i = -1;
	if (!(base = (char **)malloc(sizeof(char **) * (nbr + 1))))
		return (NULL);
	base[nbr + 1] = 0;
	while (++i < nbr)
	{
		base[i] = ft_strnew(nbr + 1);
		ft_memset((void *)base[i], '.', nbr + 1);
		base[i][nbr] = '\n';
	}
	base[nbr] = ft_strnew(1);
	base[nbr][0] = '\n';
	return (base);
}
