/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charcheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 15:07:43 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/26 15:32:23 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		charcheck(char *str, char c)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (++i < 21)
	{
		if (str[i] == c)
			count++;
	}
	return (count);
}