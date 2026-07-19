/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartign <lmartign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 15:30:06 by lmartign          #+#    #+#             */
/*   Updated: 2026/07/19 14:57:41 by lmartign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid(char *str)
{
	int	i;
	int	count;
	int	space;

	i = 0;
	count = 0;
	space = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
			count++;
		else if ((str[i] < '1' || str[i] > '4') && str[i] != ' ')
			return (1);
		if (str[i] == ' ')
			space += 1;
		i++;
	}
	if (count != 16 || space != 15)
		return (1);
	return (count);
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
		else if (v == 16)
			write(1, "16", 2);
	}
	return (0);
}*/
