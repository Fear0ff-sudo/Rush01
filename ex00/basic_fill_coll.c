/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_fill_coll.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobaudar <lobaudar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 15:11:49 by lobaudar          #+#    #+#             */
/*   Updated: 2026/07/18 16:46:05 by lobaudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	fill_coll(t_skyscrapers *basic_cell, int i, int coll)
{
	int	j;

	if (coll == 1)
	{
		j = 0;
		while (j <= 3)
		{
			basic_cell->grid[j][i] = j + '0' + 1;
			j++;
		}
	}
	else
	{
		j = 3;
		while (j >= 0)
		{
			basic_cell->grid[j][i] = j + '0' + 1;
			j++;
		}
	}
}

void	fill_basic_cell_top(t_skyscrapers *basic_cell)
{
	int	i;
	int	coll;

	coll = 1;
	i = 0;
	while (basic_cell->top[i])
	{
		if (basic_cell->top[i] == '1')
			basic_cell->grid[0][i] = '4';
		if (basic_cell->top[i] == '4')
			fill_coll(basic_cell, i, coll);
		i++;
	}
}

void	fill_basic_cell_bottom(t_skyscrapers *basic_cell)
{
	int	i;
	int	coll;

	coll = -1;
	i = 0;
	while (basic_cell->bottom[i])
	{
		if (basic_cell->bottom[i] == '1')
			basic_cell->grid[3][i] = '4';
		if (basic_cell->bottom[i] == '4')
			fill_coll(basic_cell, i, coll);
		i++;
	}
}
