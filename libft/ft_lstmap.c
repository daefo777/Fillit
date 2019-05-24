/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 22:34:09 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/17 19:39:37 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*mover;

	new = f(lst);
	if (!new)
		return (NULL);
	mover = new;
	while (lst->next)
	{
		lst = lst->next;
		mover->next = f(lst);
		if (!(mover->next))
			return (NULL);
		mover = mover->next;
	}
	return (new);
}
