/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:25:36 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/17 17:52:13 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_convert(char *to_convert)
{
	int	count_conv;
	int	count_out;
	int	*outline;

	outline = (int *)malloc(sizeof(int) * 16);
	count_conv = 0;
	count_out = 0;
	while (count_out < 16)
	{
		outline[count_out] = to_convert[count_conv] - '0';
		count_out++;
		count_conv += 2;
	}
	return (outline);
}
