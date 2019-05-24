/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_storewords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 20:40:15 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/11 14:52:55 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_storewords(char **fresh, const char *s, char c)
{
	unsigned int	nbr_chr;
	unsigned int	count;
	unsigned int	i;

	i = -1;
	count = 0;
	while (s[++i])
	{
		nbr_chr = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			i++;
			nbr_chr++;
		}
		if ((s[i - 1] != c && s[i] == c) || s[i] == '\0')
			fresh[count++] = ft_strsub(s, i - nbr_chr, nbr_chr);
		if (!s[i])
			break ;
	}
}
