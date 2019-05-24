/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_read.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:22:03 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/23 15:54:03 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		read_fillit(int fd) 
{
	char	buf[BUFF_SIZE + 1];
	char	*tmp;
	int		sign;

	line = ft_strnew(0);
	while ((sign = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[sign] = '\0';
		if(!(tmp = ft_strjoin(line, buf)))
			return (-1);
		free(line);
		line = tmp;
	}
	if (sign < 0)
		return (-1);
	length = ft_strlen(line);
	if (validcheck(line))
