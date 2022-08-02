/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:32:08 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/21 15:05:50 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	count;
	int	value;

	size = max - min;
	count = 0;
	value = min;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	if (max < 0)
		size *= -1;
	tab = malloc(sizeof(int) * (max - min + 1));
	while (count < max - min)
	{
		tab[count] = value;
		count++;
		value++;
	}
	tab[count] = '\0';
	return (tab);
}
