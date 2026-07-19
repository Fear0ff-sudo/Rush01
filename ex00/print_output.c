/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_output.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobaudar <lobaudar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 14:20:47 by amanet            #+#    #+#             */
/*   Updated: 2026/07/19 15:04:32 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_output(char grid[4][4])
{
	int		i;
	int		j;
	char	ptr;

	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			ptr = grid[i][j];
			write(1, &ptr, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
/*
#include "stdio.h"

int	main(void)
{
	char					str[] = "1234";
	struct s_skyscrapers	s1;
	int						i;
	int						j;

	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			s1.grid[i][j] = str[j];
			j++;
		}
		i++;
	}
	print_output(&s1);
	return (0);
}*/
