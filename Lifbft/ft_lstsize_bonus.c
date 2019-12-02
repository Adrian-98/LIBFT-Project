/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:48:49 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/12 18:03:29 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*count;

	count = lst;
	i = 0;
	if (!lst)
		return (0);
	while (count != NULL)
	{
		count = count->next;
		i++;
	}
	return (i);
}
