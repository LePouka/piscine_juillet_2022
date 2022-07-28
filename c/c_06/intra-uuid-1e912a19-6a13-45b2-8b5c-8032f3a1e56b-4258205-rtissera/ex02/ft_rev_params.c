/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:08:52 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/21 15:53:16 by rtissera         ###   ########.fr       */
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
	if (argv[1] == NULL)
		return (0);
	while (*(argv + j + 1) != NULL)
		j++;
	while (*(argv + j) != argv[0])
	{
		ft_putstr(argv[j]);
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
