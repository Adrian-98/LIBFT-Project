/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:28:18 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/05 11:22:12 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	z;
	char			*str1;
	size_t			i;

	str1 = str;
	z = c;
	i = 0;
	while (i < len)
	{
		str1[i] = z;
		i++;
	}
	return (str1);
}
