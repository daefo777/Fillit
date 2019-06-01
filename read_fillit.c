/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_fillit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 15:14:49 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/30 23:31:36 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**read_fillit(int fd, char *line, int *block_nbr)
{
	char	buf[BUFF_SIZE + 1];
	char	*tmp;
	int		size;
	int		sign;
	char	**block;

	while ((sign = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[sign] = '\0';
		if (!(tmp = ft_strjoin(line, buf)))
			return (NULL);
		free(line);
		line = tmp;
	}
	size = (ft_strlen(line) % 21 == 0) ? ft_strlen(line) / 21 : 0;
	*block_nbr = size;
	if (!size || sign < 0 || \
			!(block = (char **)malloc(sizeof(char **) * (size + 1))))
	{
		free(line);
		return (NULL);
	}
	block[size] = 0;
	return ((validcheck(line, block, size) == 0) ? block : NULL);
}
