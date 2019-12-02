/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:45:09 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/06 18:13:58 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (s[i] == c)
		return ((&((char*)s)[i]));
	while (i >= 0)
	{
		if (s[i] == c)
			return (&((char*)s)[i]);
		i--;
	}
	return (0);
}
