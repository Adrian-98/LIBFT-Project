/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:16:49 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/10 20:07:33 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strcat(char *dest, char *src)
{
	int i;
	int k;

	k = 0;
	i = 0;
	while (dest[k] != 0)
		k++;
	while (src[i] != 0)
	{
		dest[k + i] = src[i];
		i++;
	}
	dest[k + i] = '\0';
	return (dest);
}

static	char	*ft_strcpy(char *dest, char *src)
{
	int c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;

	if (s1 != '\0' && s2 != '\0')
	{
		len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (str == NULL)
			return (NULL);
		ft_strcpy(str, (char *)s1);
		ft_strcat(str, (char *)s2);
		return (str);
	}
	return (0);
}
