/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 18:35:15 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/06 17:30:06 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *place, const char *search)
{
	int	h1;
	int	h2;
	int	n2;

	if (*search == '\0')
		return ((char *)place);
	h1 = 0;
	while (*(place + h1))
	{
		h2 = h1;
		n2 = 0;
		while (*(search + n2) && *(place + h2) == *(search + n2))
		{
			h2++;
			n2++;
		}
		if (*(search + n2) == '\0')
			return ((char*)(place + h1));
		h1++;
	}
	return (NULL);
}
