/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 09:55:39 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/11 17:24:29 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strstore(char *fresh, int n, int j, int nbr)
{
	int		i;
	int		tmp;
	char	store[nbr];

	i = 0;
	tmp = 0;
	while (n > 9)
	{
		tmp = n;
		n %= 10;
		store[i++] = n + '0';
		n = (tmp - n) / 10;
		if (n < 10)
			store[i++] = n + '0';
	}
	while (j < nbr)
		fresh[j++] = store[--i];
	fresh[j] = '\0';
	return (fresh);
}

char		*ft_itoa(int n)
{
	char	*fresh;
	int		j;
	int		nbr;

	j = 0;
	nbr = ft_countdigit(n);
	fresh = ft_strnew(nbr);
	if (!fresh)
		return (NULL);
	if (n == -2147483648)
	{
		ft_strncpy(fresh, "-2147483648", nbr + 1);
		return (fresh);
	}
	else if (n < 0)
	{
		n = -n;
		fresh[j++] = '-';
	}
	if (n >= 0 && n < 10)
	{
		fresh[j] = n + '0';
		return (fresh);
	}
	return (ft_strstore(fresh, n, j, nbr));
}
