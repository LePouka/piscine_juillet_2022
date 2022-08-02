/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:22:34 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/17 10:38:19 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (0);
}

int	is_l(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	is_sp(int c)
{
	if (c >= ' ' && c <= '/')
		return (1);
	else if (c >= ':' && c <= '@')
		return (1);
	else if (c >= '[' && c <= '`')
		return (1);
	else if (c >= '{' && c <= '~')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	j;

	j = 0;
	ft_strlowcase(str);
	if (is_l(str[0]) == 1)
		str[j] -= 32;
	while (str[j])
	{
		if ((is_sp(str[j]) == 1) && (is_l(str[j + 1]) == 1))
			str[j + 1] -= 32;
		j++;
	}
	return (str);
}
