/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resetmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 21:20:13 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/31 23:03:44 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	resetmap(char *base, int *tetris, int i, int nbr)
{
	int	k;

	k = 0;
	base[i] = '.';
   	while (k < 3)
	{
        if (tetris[k] == 1)
        {
            base[i + 1] = '.';
            i = i + 1;
        }
        else if (tetris[k] == 4)
        {
            base[i + nbr - 2] = '.';
            i = i + nbr - 2;
        }
        else if (tetris[k] == 3)
        {
            base[i + nbr - 1] = '.';
            i = i + nbr - 1;
        }
        else if (tetris[k] == 2)
        {
            base[i + nbr] = '.';
            i = i + nbr;
        }
        k++;
    }
}
