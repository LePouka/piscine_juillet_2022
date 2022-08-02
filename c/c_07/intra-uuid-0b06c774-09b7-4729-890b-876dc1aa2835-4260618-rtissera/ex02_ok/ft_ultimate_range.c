/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:32:09 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/28 11:48:18 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	count;
	int	value;

	size = max - min;
	count = 0;
	value = min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min + 1));
	if (!range)
		return (-1);
	while (count < max - min)
	{
		range[0][count] = value;
		count++;
		value++;
	}
	range[0][count] = '\0';
	return (size);
}
