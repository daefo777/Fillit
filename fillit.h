/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 22:05:43 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/31 23:06:07 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILLIT_H
# define FT_FILLIT_H
# define BUFF_SIZE 9999

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include "./libft/includes/libft.h"
#include <stdio.h>

int		validcheck(char *line, char **block, int size);
int		blockcheck(char *line);
int		charcheck(char *str, char c);
int		poscheck(char *line);
char	*buildbase(int block_nbr);
void	free_fillit(char **block, int block_nbr);
void	free_tetris(int **tetris, int block_nbr);
char	**read_fillit(int fd, char *line, int *base);
char	*assemble(char **block, int block_nbr);
char    *assemble_2(int nbr, int **tetris);
int     assemble_3(char *base, int **tetris, int nbr, int i);
void    fillmap(char *base, int *tetris, int nbr, int i);
int     fitcheck(char *base, int *testris, int nbr, int i);
void    resetmap(char *base, int *tetris, int i, int nbr);
int		refineblock(char *line, int **tetris, int i);

#endif
