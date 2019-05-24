/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 14:40:18 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/17 19:40:35 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	mem_space;
	char	*dest;
	char	*res;

	mem_space = ft_strlen(src) + 1;
	dest = (char *)malloc(mem_space);
	if (!dest)
		return (NULL);
	if (!(res = (char *)ft_memcpy(dest, src, mem_space)))
	{
		free(dest);
		return (NULL);
	}
	return (res);
}
