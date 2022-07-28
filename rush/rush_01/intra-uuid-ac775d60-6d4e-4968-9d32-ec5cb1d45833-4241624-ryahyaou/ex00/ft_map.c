/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:59:00 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/17 23:35:51 by kquerel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_putnbr(int nb)
{
	long int	nbr;
	int			c;

	nbr = nb;
	c = 0;
	if (nbr == -2147483647)
		write(1, "-2147483647", 11);
	else if (nbr < 0)
	{
		write(1, &"-", 1);
		nbr = nb * (-1);
	}
	else if (nbr < 10)
	{
		c = nbr + 48;
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	return (1);
}

int	**ft_create_map(void)
{
	int	pos_y;
	int	**map;

	pos_y = 0;
	map = (int **)malloc(sizeof (int *) * 4);
	if (!map)
	{
		write(1, "Error\n", 6);
		return (NULL);
	}
	while (pos_y < 4)
	{
		map[pos_y] = (int *)malloc(sizeof(int) * 4);
		if (!map[pos_y])
		{
			write(1, "Error\n", 6);
			return (NULL);
		}
		pos_y++;
	}
	return (map);
}
