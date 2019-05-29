/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_fillit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 23:23:43 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/27 02:15:02 by idaeho           ###   ########.fr       */
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
