/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:48:53 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/28 11:14:39 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_length(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		length;

	i = 0;
	length = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++])
			++length;
		if (++i == size)
			break ;
		j = 0;
		while (sep[j++])
			++length;
	}
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		pos;
	int		length;
	char	*ret;

	length = get_length(size, strs, sep);
	ret = malloc(length + 1);
	i = 0;
	pos = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			ret[pos++] = strs[i][j++];
		if (++i == size)
			break ;
		j = 0;
		while (sep[j])
			ret[pos++] = sep[j++];
	}
	ret[pos] = 0;
	return (ret);
}
