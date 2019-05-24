/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validcheck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:42:53 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/23 17:01:45 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		validcheck(char *line, char **block)
{
	int		i;
	int		j;
	int		block_nbr;
	char	**block;

	i = 0;
	j = 0;
	if (ft_strlen(line) % 21 == 0)
		block_nbr =	ft_strlen(line) / 21;
	else
		return (-1);
	block = (char **)malloc(sizeof(**block) * block_nbr + 1);
	if (ft_countchar(line, '\n') != 5 || ft_countchar(line, '.' != 12 \
				|| ft_countchar(line, '#' != 4)
				return (-1);
