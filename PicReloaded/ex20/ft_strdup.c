/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jye <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:54:14 by jye               #+#    #+#             */
/*   Updated: 2016/11/03 13:06:43 by jye              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	if (str == (void *)0)
		return (0);
	while (*str)
	{
		++str;
		++len;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		l;
	char	*a;

	l = ft_strlen(src);
	if (!(a = (char *)malloc(l * sizeof(char) + 1)))
		return (NULL);
	a[l] = 0;
	l = -1;
	while (*src)
		a[++l] = *src++;
	return (a);
}
