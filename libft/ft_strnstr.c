/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 22:12:23 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/07 10:49:16 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *hstk, const char *ndle, size_t len)
{
	size_t		h1;
	size_t		h2;
	size_t		n1;
	size_t		n2;

	if (*ndle == '\0')
		return ((char *)hstk);
	h1 = 0;
	n1 = 0;
	while (*(hstk + h1) && h1 < len)
	{
		h2 = h1;
		n2 = n1;
		while (*(ndle + n2) && *(hstk + h2) == *(ndle + n2) && h1 + n2 < len)
		{
			h2++;
			n2++;
		}
		if (*(ndle + n2) == '\0')
			return ((char *)(hstk + h1));
		h1++;
	}
	return (NULL);
}
