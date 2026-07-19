/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_fill_coll.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobaudar <lobaudar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 15:11:49 by lobaudar          #+#    #+#             */
/*   Updated: 2026/07/19 14:22:49 by lobaudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	**fill_coll(char **grid, int i, int coll)
{
	int	j;

	if (coll == 1)
	{
		j = 0;
		while (j <= 3)
		{
			grid[j][i] = j + '0' + 1;
			j++;
		}
	}
	else
	{
		j = 3;
		while (j >= 0)
		{
			grid[j][i] = j + '0' + 1;
			j++;
		}
	}
	return (grid);
}

char	**fill_basic_cell_top(char **grid, char *top)
{
	int	i;
	int	coll;

	coll = 1;
	i = 0;
	while (top[i])
	{
		if (top[i] == '1')
			grid[0][i] = '4';
		if (top[i] == '4')
			grid = fill_coll(grid, i, coll);
		i++;
	}
	return (grid);
}

char	**fill_basic_cell_bottom(char **grid, char *bottom)
{
	int	i;
	int	coll;

	coll = -1;
	i = 0;
	while (bottom[i])
	{
		if (bottom[i] == '1')
			grid[3][i] = '4';
		if (bottom[i] == '4')
			grid = fill_coll(grid, i, coll);
		i++;
	}
	return (grid);
}
