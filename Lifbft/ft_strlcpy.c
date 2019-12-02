/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:46:18 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/12 17:48:57 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			count;

	count = 0;
	i = 0;
	if (!dst)
		return (dstsize);
	count = ft_strlen((char *)src);
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = ((char*)src)[i];
			i++;
		}
		dst[i] = 0;
	}
	return (count);
}
