/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:10:15 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/10 18:23:15 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	unsigned char		*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!n || dst == src)
		return (dst);
	i = 0;
	while (n > 0)
	{
		dest[i] = source[i];
		n--;
		i++;
	}
	return (dst);
}
