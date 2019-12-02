/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:00:35 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/07 14:39:24 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			a;
	size_t			i;

	a = 0;
	i = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	if (dst[i] == '\0')
	{
		while (src[a] != '\0' && dstsize - 1 > i + a)
		{
			dst[i + a] = src[a];
			a++;
		}
		dst[i + a] = '\0';
	}
	while (src[a] != '\0')
	{
		a++;
	}
	return (a + i);
}
