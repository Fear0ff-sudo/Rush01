/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_fill_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobaudar <lobaudar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 16:24:30 by lobaudar          #+#    #+#             */
/*   Updated: 2026/07/19 14:21:30 by lobaudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	**fill_line(char **grid, int j, int line)
{
	int	i;

	if (line == 1)
	{
		i = 0;
		while (i <= 3)
		{
			grid[j][i] = j + '0' + 1;
			i++;
		}
	}
	else
	{
		i = 3;
		while (i >= 0)
		{
			grid[j][i] = j + '0' + 1;
			i++;
		}
	}
	return (grid);
}

char	**fill_basic_cell_left(char **grid, char *left)
{
	int	j;
	int	line;

	line = 1;
	j = 0;
	while (left[j])
	{
		if (left[j] == '1')
			grid[j][0] = '4';
		if (left[j] == '4')
			grid = fill_line(grid, j, line);
		j++;
	}
	return (grid);
}

char	**fill_basic_cell_right(char **grid, char *right)
{
	int	j;
	int	line;

	line = -1;
	j = 0;
	while (left[j])
	{
		if (left[j] == '1')
			grid[j][0] = '4';
		if (left[j] == '4')
			grid = fill_line(grid, j, line);
		j++;
	}
	return (grid);
}
