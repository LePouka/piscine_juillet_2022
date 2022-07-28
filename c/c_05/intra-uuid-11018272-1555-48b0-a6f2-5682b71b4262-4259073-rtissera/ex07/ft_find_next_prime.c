/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:09:36 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/20 11:42:18 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	if (nb == 2)
		return (1);
	else if (nb < 2 || nb % 2 == 0)
		return (0);
	count = 3;
	while (count < nb / count)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
