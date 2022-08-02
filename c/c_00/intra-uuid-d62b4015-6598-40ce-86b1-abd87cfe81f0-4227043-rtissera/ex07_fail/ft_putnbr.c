/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 10:44:59 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/11 08:34:54 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
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
}
