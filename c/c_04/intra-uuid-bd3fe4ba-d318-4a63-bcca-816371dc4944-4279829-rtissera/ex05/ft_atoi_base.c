/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:59:57 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/27 16:01:38 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_calcul(char str_char, char *base, int r)
{
	int	count;
	int	base_size;

	count = 0;
	base_size = ft_strlen(base);
	while (str_char != base[count])
		count++;
	r = r * base_size + count;
	return (r);
}

int	is_in_base(char str, char *base)
{
	int	count;

	count = 0;
	while (base[count])
	{
		if (str == base[count])
			return (1);
		count++;
	}
	return (0);
}

int	check_base(char *base)
{
	int	count;
	int	count_test;

	count = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[count])
	{
		if (base[count] == 32
			|| (base[count] >= 9 && base[count] <= 13))
			return (0);
		if (base[count] == '+' || base[count] == '-')
			return (0);
		count_test = 0;
		while (count_test < count)
		{
			if (base[count] == base[count_test])
				return (0);
			count_test++;
		}
		count++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	r;
	int	s;
	int	count;

	if (check_base(base))
	{
		r = 0;
		s = 1;
		count = 0;
		while (str[count] == 32 || (str[count] >= 9 && str[count] <= 13))
			count++;
		while (str[count] == '-' || str[count] == '+')
		{
			if (str[count] == '-')
				s *= -1;
			count++;
		}
		while (is_in_base(str[count], base))
		{
			r = ft_calcul(str[count], base, r);
			count++;
		}
		return (r * s);
	}
	return (0);
}
