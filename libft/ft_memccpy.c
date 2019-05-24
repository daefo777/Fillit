/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:16:06 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/11 14:21:02 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *source, int c, size_t n)
{
	void	*p;

	p = ft_memchr(source, c, n);
	if (p == NULL)
	{
		ft_memcpy(dest, source, n);
		return (NULL);
	}
	ft_memcpy(dest, source, p - source + 1);
	return (dest + (p - source + 1));
}
