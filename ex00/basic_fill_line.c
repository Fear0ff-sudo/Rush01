/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_fill_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobaudar <lobaudar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 16:24:30 by lobaudar          #+#    #+#             */
/*   Updated: 2026/07/18 16:37:33 by lobaudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	fill_line(t_skyscrapers *basic_cell, int j, int line)
{
	int	i;

	if (line == 1)
	{
		i = 0;
		while (i <= 3)
		{
			basic_cell->grid[j][i] = j + '0' + 1;
			i++;
		}
	}
	else
	{
		i = 3;
		while (i >= 0)
		{
			basic_cell->grid[j][i] = j + '0' + 1;
			i++;
		}
	}

}

void	fill_basic_cell_left(t_skyscrapers *basic_cell)
{
	int	j;
	int	line;

	line = 1;
	j = 0;
	while (basic_cell->left[j])
	{
		if (basic_cell->left[j] == '1')
			basic_cell->grid[j][0] = '4';
		if (basic_cell->left[j] == '4')
			fill_line(basic_cell, j, line);
		j++;
	}
}

void	fill_basic_cell_right(t_skyscrapers *basic_cell)
{
	int	j;
	int	line;

	line = -1;
	j = 0;
	while (basic_cell->left[j])
	{
		if (basic_cell->left[j] == '1')
			basic_cell->grid[j][0] = '4';
		if (basic_cell->left[j] == '4')
			fill_line(basic_cell, j, line);
		j++;
	}
}
