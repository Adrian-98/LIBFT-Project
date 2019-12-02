/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:34:01 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/10 19:45:40 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*puntero;
	unsigned	int		i;

	if (s == NULL)
		return (NULL);
	if (!(puntero = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		puntero[i] = 0;
		i++;
	}
	if (i > start)
	{
		i = 0;
		while (len-- > 0)
		{
			puntero[i] = s[start];
			i++;
			start++;
		}
	}
	puntero[i] = '\0';
	return (puntero);
}
