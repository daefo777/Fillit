/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validcheck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:42:53 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/26 15:57:28 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			validcheck(char *line, char **block, int size)
{
	int		i;
	char	*tmp;

	i = -1;
	while (++i < size)
	{
		if (charcheck(line, '.') == 12 && charcheck(line, '#') == 4 \
				&& poscheck(line) && blockcheck(line))
		{
			block[i] = ft_strsub(line, 0, 21);
			tmp = ft_strdup(line + 21);
			free(line);
			line = tmp;
		}
		else
		{
			while (i)
				free(block[--i]);
			free(block);
			block = NULL;
			return (-1);
		}
	}
	return ((i == size) ? 0 : -1);
}
