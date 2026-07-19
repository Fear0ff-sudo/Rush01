/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobaudar <lobaudar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:22:09 by lobaudar          #+#    #+#             */
/*   Updated: 2026/07/19 14:37:46 by lobaudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**fill_basic_cell_top(char **grid, char *top);
char	**fill_basic_cell_bottom(char **grid, char *bottom);
char	**fill_basic_cell_left(char **grid, char *left);
char	**fill_basic_cell_right(char **grid, char *right);


char	**basic_grid(char **params, char **grid)
{
	grid = fill_basic_cell_top(grid, params[0]);
	grid = fill_basic_cell_bottom(grid, params[1]);
	grid = fill_basic_cell_left(grid, params[2]);
	grid = fill_basic_cell_right(grid, params[3]);
	return (grid);
}
