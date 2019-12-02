/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:49:48 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/12 18:02:40 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*node;

	if (alst == NULL)
		return ;
	node = *alst;
	if (*alst == NULL)
		*alst = new;
	else
	{
		while (node->next)
			node = node->next;
		node->next = new;
	}
}
