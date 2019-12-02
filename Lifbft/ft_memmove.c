/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:18:18 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/06 21:04:11 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*destino;
	const unsigned char	*fuente;

	destino = (unsigned char*)dst;
	fuente = (unsigned char*)src;
	i = 0;
	if (destino == fuente)
		return (dst);
	if (fuente < destino)
	{
		while (i++ < len)
			destino[len - i] = fuente[len - i];
	}
	else
	{
		i = 0;
		while (len-- > 0)
		{
			destino[i] = fuente[i];
			i++;
		}
	}
	return (dst);
}
