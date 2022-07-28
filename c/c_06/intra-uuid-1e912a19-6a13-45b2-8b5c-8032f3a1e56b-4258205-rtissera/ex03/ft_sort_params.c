/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:23:19 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/20 15:19:05 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		write(1, &*(str + count), 1);
		count++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		count;
	char	*c;

	count = 1;
	while (count < (argc - 1))
	{
		if (ft_strcmp(argv[count], argv[count + 1]) > 0)
		{
			c = argv[count];
			argv[count] = argv[count + 1];
			argv[count + 1] = c;
			count = 0;
		}
		count++;
	}
	count = 1;
	while (argv[count])
	{
		ft_putstr(argv[count]);
		write (1, "\n", 1);
		count++;
	}
	return (0);
}
