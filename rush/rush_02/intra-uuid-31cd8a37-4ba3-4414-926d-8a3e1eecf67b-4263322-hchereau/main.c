/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:26:14 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/23 13:26:52 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_argc(int nb);
int	check_and_atoi(char *str);

int	main(int argc, char **argv)
{
	if (check_argc(argc) == 1)
		check_and_atoi(argv[1]);
	else if (check_argc(argc) == 3)
		check_and_atoi(argv[2]);
	else
		return (0);
}
