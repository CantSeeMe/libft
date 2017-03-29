/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jye <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 18:21:54 by jye               #+#    #+#             */
/*   Updated: 2016/11/03 19:07:07 by jye              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

void	ft_putstr_fd(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

int		main(int argc, char **argv)
{
	char	buf[2049];
	int		fd;
	int		tmp;

	fd = 0;
	if (argc < 2)
		ft_putstr_fd(2, "File name missing.\n");
	else if (argc > 2)
		ft_putstr_fd(2, "Too many arguments.\n");
	else
	{
		if (!(fd = open(argv[1], O_RDONLY)))
			return (0);
		while ((tmp = read(fd, buf, 2048)))
		{
			buf[tmp] = '\0';
			ft_putstr_fd(1, buf);
		}
		close(fd);
	}
	return (0);
}
