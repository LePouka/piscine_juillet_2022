/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:32:23 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/26 17:44:41 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		c = tab[i];
		tab[i] = tab[j];
		tab[j] = c;
		i++;
		j--;
	}
}
