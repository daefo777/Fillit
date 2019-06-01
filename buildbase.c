/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buildbase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 21:11:25 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/31 23:27:43 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*char	**buildbase(int nbr)
{
	int		i;
	char	**base;

	i = -1;
	if (!(base = (char **)malloc(sizeof(char *) * (nbr + 1))))
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
}*/

char	*buildbase(int nbr)
{
	int		i;
	char	*base;

	i = 0;
	if (!(base = ft_strnew((nbr * (nbr + 1) + 1))))
		return (NULL);
	ft_memset((void *)base, '.', nbr * (nbr + 1));
	base[nbr * (nbr + 1)] = '\n';
	while (i++ < nbr)
		base[(nbr + 1) * i - 1] = '\n';
	return (base);
}
