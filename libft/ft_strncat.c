/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 18:01:30 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/02 19:29:05 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;

	i = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	n = (len_src < n) ? len_src : n;
	while (n--)
	{
		*(dst + len_dst + i) = *(src + i);
		i++;
	}
	*(dst + len_dst + i) = '\0';
	return (dst);
}
