/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:02:20 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/24 14:34:50 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		n = 0;
		i = 0;
		while (str[i++] == to_find[n++])
		{
			if (to_find[n] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
