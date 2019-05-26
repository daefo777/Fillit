/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blockcheck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 13:15:50 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/26 16:03:52 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		blockcheck(char *line)
{
	int		touch;
	int		i;

	touch = 0;
	i = -1;
	while (line[++i] && i < 21)
	{
		if (i - 1 >= 0 && line[i] == '#' && line[i - 1] == '#')
			touch++;
		if (i + 1 < 21 && line[i] == '#' && line[i + 1] == '#')
			touch++;
		if (i - 5 >= 0 && line[i] == '#' && line[i - 5] == '#')
			touch++;
		if (i + 5 < 21 && line[i] == '#' && line[i + 5] == '#')
			touch++;
	}
	printf("touch = %d\n", touch);
	if (touch == 6 || touch == 8)
		return (1);
	return (0);
}
