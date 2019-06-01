/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_fillit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 23:23:43 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/31 13:29:42 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	free_fillit(char **block, int block_nbr)
{
	int	i;

	i = 0;
	if (block)
	{
		while (i < block_nbr)
			ft_strdel(&block[i++]);
		free(block);
		block = NULL;
	}
}

void	free_tetris(int	**tetris, int block_nbr)
{
	int	i;

	i = 0;
	if (tetris)
	{
		while (i < block_nbr)
			ft_memdel((void **)&tetris[i++]);
		free(tetris);
		tetris = NULL;
	}
}
