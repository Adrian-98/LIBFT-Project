/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:15:05 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/13 13:41:32 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		len;
	char	*puntero;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (!((s1[start] && ft_strchr(set, s1[start])) == 0))
		start++;
	len = ft_strlen((char *)s1) - start;
	if (len != 0)
	{
		while (len - 1 > start && ft_strchr(set, s1[start + len - 1]) != 0)
			len--;
	}
	if (!(puntero = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	ft_strncpy(puntero, (char *)(s1 + start), len);
	puntero[len] = '\0';
	return (puntero);
}
