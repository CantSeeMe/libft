/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jye <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:01:42 by jye               #+#    #+#             */
/*   Updated: 2016/11/02 18:08:24 by jye              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char z);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	return ;
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 1)
		return (0);
	while (++i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
	}
	return (0);
}
