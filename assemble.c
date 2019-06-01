/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assemble.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 16:14:39 by idaeho            #+#    #+#             */
/*   Updated: 2019/06/01 00:11:12 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		**verifyblock(char **block, int block_nbr)
{
	int	i;
	int	**tetris;
	
	i = -1;
	if (!(tetris = (int **)malloc(sizeof(int *) * block_nbr + 1)))
		return (NULL);
	tetris[block_nbr] = 0;
	while (++i < block_nbr)
	{ 
		if (!(refineblock(block[i], tetris, i)))
		{
			free_fillit(block, block_nbr);
			free_tetris(tetris, i);
			return (NULL);
		}
	}
	free_fillit(block, block_nbr);
	return (tetris);
}

int		fitcheck(char *base, int *tetris, int nbr, int i)
{
	int	k;

	k = 0;
	while (base[i] != '.' || base[i] == '\n')
		i++;
	while (k < 3)
	{
		if (tetris[k] == 1 && base[i + 1] == '.')
			i = i + 1;
		else if (tetris[k] == 4 && base[i + nbr - 1] == '.')
			i = i + nbr - 1;
		else if (tetris[k] == 3 && base[i + nbr] == '.')
			i = i + nbr;
		else if (tetris[k] == 2 && base[i + nbr + 1] == '.')
			i = i + nbr + 1;
		else
			break;
		k++;
	}
	return ((k == 3) ? 1 : 0);
}

void	fillmap(char *base, int *tetris, int nbr, int i)
{
	int	k;

	k = 0;
	while (base[i] != '.' || base[i] == '\n')
		i++;
	base[i] = tetris[3];
	while (k < 3)
	{
		if (tetris[k] == 1 && base[i + 1] == '.')
		{
			base[i + 1] = tetris[3];
			i = i + 1;
		}
		else if (tetris[k] == 4 && base[i + nbr - 1] == '.')
		{
			base[i + nbr - 1] = tetris[3];
			i = i + nbr - 1;
		}
		else if (tetris[k] == 3 && base[i + nbr] == '.')
		{
			base[i + nbr] = tetris[3];
			i = i + nbr;
		}
		else if (tetris[k] == 2 && base[i + nbr + 1] == '.')
		{
			base[i + nbr + 1] = tetris[3];
			i = i + nbr + 1;
		}
		k++;
	}
}

int		assemble_3(char *base, int **tetris, int nbr, int i)
{
	static int	k;
	int	j;
	int	next;
	int block_nbr;

	j = 0;
	k = 0;
	while (tetris[j])
		j++;
	block_nbr = j;
	while (k < block_nbr)
	{
		i = 0;
		while (i < nbr * (nbr + 1) - 1)
		{
			if (fitcheck(base, tetris[k], nbr, i))
			{
				next = i + 1;
				fillmap(base, tetris[k], nbr, i);
				printf("%s", base);
				break ;
			}
			i++;
		}
		printf("%d\n", i);
		if (i == nbr * (nbr + 1) - 1)
			break ;
		k++;
	}
	if (next < nbr * (nbr + 1) - 1 && k != block_nbr)
	{
		resetmap(base, tetris[k--], next - 1, nbr);
		assemble_3(base, tetris, nbr, next);
	}
	else if (k == block_nbr)
		return (1);
	return (0);
}

char	*assemble_2(int nbr, int **tetris)
{
	char	*base;

	if (!(base = buildbase(nbr)))
		return (NULL);
	if (assemble_3(base, tetris, nbr, 0))
		return (base);
	else
	{
		ft_strdel(&base);
		return (assemble_2(nbr + 1, tetris));
	}
}

char	*assemble(char **block, int block_nbr)
{
	char	*base;
	int		**tetris;
	int		nbr;
		
	nbr = 3;
	while (block_nbr * 4 > nbr * nbr)
		nbr++;
	if (!(tetris = verifyblock(block, block_nbr)))
		return (NULL);
/*	int i = 0;
	int	k = 0;
	while (k < 4)
	{
		i = 0;
		printf("tetris[%d] =\n ", k);
		while (i < 4)
			printf("%d",tetris[k][i++]);
		k++;
	}*/
	if (!(base = assemble_2(nbr, tetris)))
	{
		free_tetris(tetris, block_nbr);
		return (NULL);
	}
	free_tetris(tetris, block_nbr);
	return (base);
}
