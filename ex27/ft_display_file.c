/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 10:51:34 by jmousset          #+#    #+#             */
/*   Updated: 2019/04/04 15:32:21 by jmousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buf[4096 + 1];

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		while ((ret = read(fd, buf, 4096)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		close(fd);
		return (1);
	}
	else if (ac > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (2);
	}
	else
	{
		write(1, "File name missing.\n", 19);
		return (2);
	}
}
