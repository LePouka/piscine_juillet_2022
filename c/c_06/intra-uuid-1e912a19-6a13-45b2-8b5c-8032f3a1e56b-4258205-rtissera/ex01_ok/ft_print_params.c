/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:50:32 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/19 10:57:33 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write(1, &*(str + i), 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	j;

	j = 1;
	(void) argc;
	while (*(argv + j) != NULL)
	{
		ft_putstr(argv[j]);
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
