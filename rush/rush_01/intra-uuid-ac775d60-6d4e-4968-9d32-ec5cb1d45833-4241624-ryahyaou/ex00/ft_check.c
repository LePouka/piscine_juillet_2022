/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:35:12 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/17 23:28:22 by kquerel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_left_line(int *outline, int **map)
{
	int	bank;
	int	max;
	int	pos_y;
	int	pos_x;

	pos_y = 0;
	while (pos_y < 4)
	{
		max = 0;
		bank = 0;
		pos_x = 0;
		while (pos_x < 4)
		{
			if (map[pos_y][pos_x] > max)
			{
				bank++;
				max = map[pos_y][pos_x];
			}
			pos_x++;
		}
		if (bank != outline[8 + pos_y])
			return (0);
		pos_y++;
	}
	return (1);
}

int	check_right_line(int *outline, int **map)
{
	int	bank;
	int	max;
	int	pos_y;
	int	pos_x;

	pos_y = 0;
	while (pos_y < 4)
	{
		max = 0;
		pos_x = 3;
		bank = 0;
		while (pos_x >= 0)
		{
			if (map[pos_y][pos_x] > max)
			{
				bank++;
				max = map[pos_y][pos_x];
			}
			pos_x--;
		}
		if (bank != outline[12 + pos_y])
			return (0);
		pos_y++;
	}
	return (1);
}

int	check_up_col(int *outline, int **map)
{
	int	bank;
	int	max;
	int	pos_x;
	int	pos_y;

	pos_x = 0;
	while (pos_x < 4)
	{
		max = 0;
		pos_y = 0;
		bank = 0;
		while (pos_y < 4)
		{
			if (map[pos_y][pos_x] > max)
			{
				bank++;
				max = map[pos_y][pos_x];
			}
			pos_y++;
		}
		if (bank != outline[0 + pos_x])
			return (0);
		pos_x++;
	}
	return (1);
}

int	check_down_col(int *outline, int **map)
{
	int	bank;
	int	max;
	int	pos_x;
	int	pos_y;

	pos_x = 0;
	while (pos_x < 4)
	{
		max = 0;
		pos_y = 3;
		bank = 0;
		while (pos_y >= 0)
		{
			if (map[pos_y][pos_x] > max)
			{
				bank++;
				max = map[pos_y][pos_x];
			}
			pos_y--;
		}
		if (bank != outline[4 + pos_x])
			return (0);
		pos_x++;
	}
	return (1);
}

int	ft_check(int *outline, int **map)
{
	if (check_down_col(outline, map) && check_left_line(outline, map)
		&& check_right_line(outline, map) && check_up_col(outline, map))
		return (1);
	else
		return (0);
}
