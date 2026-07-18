/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartign <lmartign@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 15:30:06 by lmartign          #+#    #+#             */
/*   Updated: 2026/07/18 15:44:36 by lmartign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid(char *av)
{
	int	i;
	int	arg;
	int	space;

	i = 0;
	arg = 0;
	space = 0;
	while (av[i])
	{
		if (av[i] >= '1' && av[i] <= '4')
			arg++;
		else if ((av[i] < '1' || av[i] > '4') && av[i] != ' ')
			return (1);
		if (av[i] == ' ')
			space += 1;
		i++;
	}
	if (arg != 16 || space != 15)
		return (1);
	return (0);
}
/*
int	main(int argc, char **argv)
{
	int	v;

	v = 0;
	if (argc == 2)
	{
		v = is_valid(argv[1]);
		if (v == 1)
			write(1, "Error", 5);
	}
	return (0);
}*/
