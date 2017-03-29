/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jye <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 19:16:06 by jye               #+#    #+#             */
/*   Updated: 2016/11/03 13:32:52 by jye              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*ran;
	int		i;

	if (min >= max)
		return (NULL);
	if (!(ran = (int *)malloc((max - min) * sizeof(int))))
		return (NULL);
	i = -1;
	while (min < max)
		ran[++i] = min++;
	return (ran);
}
