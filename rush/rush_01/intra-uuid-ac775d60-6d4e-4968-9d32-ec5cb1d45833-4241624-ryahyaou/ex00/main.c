/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:30:50 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/17 23:36:35 by kquerel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_convert(char *to_convert);
int	**ft_create_map(void);
int	ft_check(int *outline, int **map);
int	ft_putnbr(int nb);

int	check_arg(int nbr, char *str)
{
	int	count;

	count = 0;
	if (nbr != 2)
		return (0 * write (1, "Error\n", 6));
	while (str[count])
		count++;
	if (count != 31)
		return (0 * write (1, "Error\n", 6));
	count = 0;
	while (str[count])
	{
		if (str[count] < '1' || str[count] > '4')
			return (0 * write (1, "Error\n", 6));
		if (str[count + 1] != '\0')
		{
			count++;
			if (str[count] != ' ')
				return (0 * write (1, "Error\n", 6));
		}
		count++;
	}
	return (1);
}

int	**test_map(int **map)
{
	map[0][0] = 1;
	map[0][1] = 2;
	map[0][2] = 3;
	map[0][3] = 4;
	map[1][0] = 2;
	map[1][1] = 3;
	map[1][2] = 4;
	map[1][3] = 1;
	map[2][0] = 3;
	map[2][1] = 4;
	map[2][2] = 1;
	map[2][3] = 2;
	map[3][0] = 4;
	map[3][1] = 1;
	map[3][2] = 2;
	map[3][3] = 3;
	return (map);
}

void	ft_print(int **to_print)
{
	int	countx;
	int	county;

	county = 0;
	while (county < 4)
	{
		countx = 0;
		while (countx < 4)
		{
			ft_putnbr(to_print[county][countx]);
			if (countx < 3)
				write (1, " ", 1);
			countx++;
		}
		write (1, "\n", 1);
		county++;
	}
}

int	main(int argc, char **argv)
{
	int	*outline;
	int	**map;
	int	success;

	if (argc != 2 || check_arg(argc, argv[1]))
		return (0);
	outline = ft_convert(argv[1]);
	map = ft_create_map();
	map = test_map(map);
	success = ft_check(outline, map);
	if (success)
		ft_print(map);
	free(outline);
	return (0);
}
