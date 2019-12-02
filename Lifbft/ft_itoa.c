/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 18:02:00 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/11/10 20:10:39 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	char	*ft_iscero(void)
{
	char	*pointer;

	pointer = (char *)malloc(sizeof(char) * 2);
	pointer[0] = '0';
	pointer[1] = '\0';
	return (pointer);
}

static	char	*ft_isnegative(int i, int n)
{
	char	*pointer;

	if (!(pointer = (char *)malloc(sizeof(char) * (i + 2))))
		return (NULL);
	pointer[i + 1] = '\0';
	while (n != 0)
	{
		pointer[i] = -(n % 10) + '0';
		n = (n / 10);
		i--;
	}
	pointer[0] = '-';
	return (pointer);
}

static	char	*ft_ispositive(int i, int n)
{
	char	*pointer;

	if (!(pointer = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	pointer[i] = '\0';
	while (n != 0)
	{
		pointer[i - 1] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (pointer);
}

char			*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*pointer;

	j = n;
	i = 0;
	while (j != 0)
	{
		i++;
		j = j / 10;
	}
	if (n == 0)
	{
		pointer = ft_iscero();
	}
	if (n < 0)
	{
		pointer = ft_isnegative(i, n);
	}
	if (n > 0)
	{
		pointer = ft_ispositive(i, n);
	}
	return (pointer);
}
