/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:26:08 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/12 18:03:14 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list		*node;
	t_list		*nextnode;

	if (!lst || !f)
		return ;
	node = lst;
	while (node != '\0')
	{
		nextnode = node->next;
		f(node->content);
		node = nextnode;
	}
}
