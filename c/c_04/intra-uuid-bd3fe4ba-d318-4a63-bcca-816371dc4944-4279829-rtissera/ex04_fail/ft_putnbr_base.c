/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:00:10 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/28 12:00:53 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base_test)
{
	int	count;
	int	count_test;

	count = 0;
	if (base_test[0] == '\0' || base_test[1] == '\0')
		return (0);
	while (base_test[count])
	{
		if (base_test[count] == 32
			|| (base_test[count] >= 9 && base_test[count] <= 13))
			return (0);
		if (base_test[count] == '+' || base_test[count] == '-')
			return (0);
		count_test = 0;
		while (count_test < count)
		{
			if (base_test[count] == base_test[count_test])
				return (0);
			count_test++;
		}
		count++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	count;
	int	base_size;
	int	to_print[100];

	count = 0;
	base_size = ft_strlen(base);
	if (check_base(base))
	{
		if (nbr < 0)
		{
			write (1, "-", 1);
			nbr *= -1;
		}
		while (nbr > 0)
		{
			to_print[count] = nbr % base_size;
			nbr /= base_size;
			count++;
		}
		while (to_print[--count - 1])
			ft_putchar (base[to_print[count]]);
	}
}
