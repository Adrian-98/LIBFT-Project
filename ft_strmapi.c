/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 16:52:49 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/10 18:01:09 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	int					j;
	char				*pointer;

	i = 0;
	j = 0;
	if (s != '\0' && f != '\0')
	{
		j = ft_strlen((char *)s);
		if (!(pointer = (char *)malloc(sizeof(char) * (j + 1))))
			return (NULL);
		while (s[i] != '\0')
		{
			pointer[i] = f(i, s[i]);
			i++;
		}
		pointer[i] = '\0';
		return (pointer);
	}
	else
		return (NULL);
}
