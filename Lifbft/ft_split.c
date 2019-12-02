/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:04:37 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/12 17:23:19 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_wordscounter(const char *s, char c, int *pointer)
{
	int i;
	int size;

	if (!s)
		return (-1);
	i = 0;
	size = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			size++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	*pointer = i - 1;
	return (size);
}

static int	ft_malloc(int size, int i, int j, char **pointer)
{
	((pointer[size] = (char *)malloc(sizeof(char) * (j - i + 1))));
	if (pointer[size] == NULL)
	{
		while (pointer[size] != '\0')
			free(pointer[size++]);
		free(pointer);
		return (0);
	}
	return (1);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		size;
	int		j;
	char	**pointer;

	i = 0;
	size = ft_wordscounter(s, c, &i);
	if (!(pointer = (char **)malloc(sizeof(char *) * (size + 1))) || size == -1)
		return (0);
	pointer[size] = NULL;
	while (i >= 0)
	{
		if (s[i] != c)
		{
			j = i;
			while (i >= 0 && s[i] != c)
				i--;
			size--;
			if (ft_malloc(size, i, j, pointer) == 0)
				return (0);
			ft_strlcpy(pointer[size], &((char *)s)[i + 1], j - i + 1);
		}
		i--;
	}
	return (pointer);
}
