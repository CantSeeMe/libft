/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jye <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:17:58 by jye               #+#    #+#             */
/*   Updated: 2016/11/02 18:53:41 by jye              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char z);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	return ;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int ac, char **av)
{
	int		i;
	char	*tmp;

	i = 0;
	if (ac == 1)
		return (0);
	while (++i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			tmp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = tmp;
			i = 0;
		}
	}
	i = 0;
	while (++i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
	}
	return (0);
}
