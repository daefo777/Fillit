/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 22:05:43 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/26 15:23:04 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILLIT_H
# define FT_FILLIT_H
# define BUFF_SIZE 8

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
char	**read_fillit(int fd, char *line);

#endif
