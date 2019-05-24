/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 10:33:35 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/17 19:41:08 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char			**fresh;
	unsigned int	nbr_arr;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = -1;
	nbr_arr = ft_countwords(s, c);
	fresh = (char **)malloc(sizeof(char **) * (nbr_arr + 1));
	if (!fresh)
		return (NULL);
	ft_storewords(fresh, s, c);
	while (++i < nbr_arr)
		if (!fresh[i])
			return (NULL);
	fresh[nbr_arr] = 0;
	return (fresh);
}
