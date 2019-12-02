/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:08:23 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/07 11:57:01 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const char		*b;

	b = s;
	i = 0;
	while (i < n)
	{
		if (b[i] == c)
			return (&((char*)s)[i]);
		i++;
	}
	return (NULL);
}
