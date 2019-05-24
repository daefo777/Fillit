/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 00:14:00 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/17 19:41:15 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	fresh = ft_strnew(len);
	if (!fresh)
		return (NULL);
	ft_strncpy(fresh, s + start, len);
	fresh[len] = '\0';
	return (fresh);
}
