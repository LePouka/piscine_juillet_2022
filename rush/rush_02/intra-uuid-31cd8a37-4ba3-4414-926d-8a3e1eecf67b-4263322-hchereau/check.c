/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:59:50 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/23 14:49:33 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_argc(int nb)
{
	if (nb == 2)
		return (1);
	else if (nb == 3)
		return (3);
	else
		return (0);
}

int	check_and_atoi(char *str)
{
	unsigned int	res;

	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		if ((res == 429496729 && *str > 5) || (res > 429496729 && *str != '\0'))
		{
			ft_error();
			return (0);
			
		}
		res = res * 10 + *str - '0';
		str++;
	}
	if (*str != '\0')
	{
		ft_error();
		return (0);
	}
	return (res);
}

int	check_dictionary(char *file_name)
{
	int	count;

	count = 0;
	if (file_name[0] >= '0' && file_name[count] <= '9')
	{
		while (file_name[count] >= '0' && file_name[count] <= '9')
			count++;
		while (file_name[count] == ' ')
			count++;
		if (file_name[count] == ':')
			count++;
		else
			return (0);
		while (file_name[count] == ' ')
			count++;
		while (file_name[count] >= ' ' && file_name[count] <= '~')
			count++;
		if (file_name[count] == '\n' && file_name[count + 1] == '\0')
			return (1);
		else
			return (0);
	}
}
