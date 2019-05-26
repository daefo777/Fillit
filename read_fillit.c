/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_fillit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 15:14:49 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/26 15:54:14 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**read_fillit(int fd, char *line) 
{
	char	buf[BUFF_SIZE + 1];
	char	**block;
	int		size;
	char	*tmp;
	int		sign;

	while ((sign = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[sign] = '\0';
		if(!(tmp = ft_strjoin(line, buf)))
			return (NULL);
		free(line);
		line = tmp;
	}
	printf("line =\n%s", line);
	size = (ft_strlen(line) % 21 == 0) ? ft_strlen(line) / 21 : 0;
	printf("size = %d\n", size);
	if (!size || sign < 0 || \
			!(block = (char **)malloc(sizeof(char **) * (size + 1))))
	{
		free(line);
		return (NULL);
	}
	block[size] = 0;
	return ((validcheck(line, block, size) == 0) ? block : NULL);
}
