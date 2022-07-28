/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 21:40:46 by pbosc             #+#    #+#             */
/*   Updated: 2022/07/10 11:09:21 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_border(int tab[2], int x, int y)
{
	int	is_tl;
	int	is_br;
	int	is_tr;
	int	is_bl;

	if (tab[0] == 0 || tab[0] == y - 1 || tab[1] == 0 || tab[1] == x - 1)
	{
		is_tl = (tab[0] == 0 && tab[1] == 0);
		is_br = (tab[1] == x - 1 && tab[0] == y - 1);
		is_tr = (tab[0] == 0 && tab[1] == x - 1);
		is_bl = (tab[1] == 0 && tab[0] == y - 1);
		if (is_tl || (is_br && !is_bl && !is_tr))
			ft_putchar('/');
		else
		{
			if (is_tr || is_bl)
				ft_putchar('\\');
			else
				ft_putchar('*');
		}
	}
	else
		ft_putchar(' ');
}

void	rush01(int x, int y)
{
	int	tab[2];

	tab[0] = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (tab[0] < y)
	{
		tab[1] = 0;
		while (tab[1] < x)
		{
			print_border(tab, x, y);
			tab[1]++;
		}
		ft_putchar('\n');
		tab[0]++;
	}
}
