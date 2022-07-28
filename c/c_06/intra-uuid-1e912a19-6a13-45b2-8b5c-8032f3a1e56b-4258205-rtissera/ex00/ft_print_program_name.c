/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:52:04 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/19 10:55:56 by rtissera         ###   ########.fr       */
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
	(void) argc;
	ft_putstr(argv[0]);
	return (0);
}
