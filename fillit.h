/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 22:05:43 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/26 23:16:19 by idaeho           ###   ########.fr       */
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
void	letterchange(char **block, int i);
char	**read_fillit(int fd, char *line, int *base);
int		assemble(char **block, int block_nbr);

#endif
