/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:43:35 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/12 18:03:21 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*node;
	t_list		*nodeaux;
	t_list		*lstaux;

	if (!(node = (t_list*)malloc(sizeof(t_list))))
		return (0);
	lstaux = lst;
	nodeaux = node;
	while (lstaux != '\0')
	{
		nodeaux->content = f(lstaux->content);
		lstaux = lstaux->next;
		if (!(nodeaux->next = (t_list *)malloc(sizeof(t_list))))
			ft_lstclear(&node, del);
		nodeaux = nodeaux->next;
	}
	return (node);
}
