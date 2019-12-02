/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:55:03 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/12 18:03:07 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*node;
	t_list		*thennode;

	if (del == 0 || *lst == 0)
		return ;
	node = *lst;
	while (node != NULL)
	{
		thennode = node->next;
		del(node->content);
		free(node);
		node = thennode;
	}
	*lst = NULL;
}
