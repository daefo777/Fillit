/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refineblock.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 22:23:00 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/30 19:49:08 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int     refineblock(char *block, int **tetris, int i)
{
    int j;
    int k;

    j = 0;
	k = 0;
	if(!(tetris[i] = (int *)malloc(sizeof(int) * 4)))
		return (0);
    while (block[j])
    {
        while (block[j] == '.' || block[j] == '\n')
			j++;
		if (j + 1 < 21 && block[j] == '#' && block[j + 1] == '#')
			tetris[i][k++] = 1;
		else if (j + 3 < 21 && block[j] == '#' && block[j + 3] == '#')
			tetris[i][k++] = 4;
		else if (j + 4 < 21 && block[j] == '#' && block[j + 4] == '#')
			tetris[i][k++] = 3;
		else if (j + 5 < 21 && block[j] == '#' && block[j + 5] == '#')
			tetris[i][k++] = 2;
		j++;
	}
	tetris[i][k] = 'A' + i;
	return (1);
}
		//---------------------------------------------------
		//    ---- # -> 1
		//    ↓  ↙ ↓ 
		//    4 3  2
