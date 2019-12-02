/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:47:56 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/12 18:07:49 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dest;
	unsigned char		*source;
	unsigned char		d;
	int					i;

	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	d = c;
	while (n-- > 0)
	{
		dest[i] = source[i];
		if (source[i] == d)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
