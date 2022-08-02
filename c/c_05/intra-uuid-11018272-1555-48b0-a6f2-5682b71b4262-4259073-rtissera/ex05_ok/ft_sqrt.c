/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:30:35 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/20 01:59:24 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	count;
	unsigned int	nb_u;

	count = 0;
	nb_u = (unsigned int)nb;
	if (nb < 0)
		return (0);
	while (count * count < nb_u)
		count++;
	if (count * count == nb_u)
		return (count);
	else
		return (0);
}
