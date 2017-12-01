/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jye <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:49:15 by jye               #+#    #+#             */
/*   Updated: 2017/12/01 02:21:56 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ndl, size_t n)
{
	size_t	nlen;

	nlen = ft_strlen(ndl);
	while (n > nlen)
	{
		if (!ft_memcmp(hay, ndl, nlen))
			return ((char *)hay);
		hay++;
		n--;
	}
	return (0);
}
