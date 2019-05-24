/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:45:39 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/07 13:38:50 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict dest, const char *restrict src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
		ptr++;
	ft_strcpy(ptr, src);
	return (dest);
}
