/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto_backtracking.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobaudar <lobaudar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:51:33 by lobaudar          #+#    #+#             */
/*   Updated: 2026/07/19 15:10:19 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	is_possible_relative_left(int nb, char grid[nb][nb], char rule[nb][nb]);
int	is_possible_relative_top(int nb, char grid[nb][nb], char rule[nb][nb]);
int	is_possible_relative_bottom(int nb, char grid[nb][nb], char rule[nb][nb]);
int	is_possible_relative_right(int nb, char grid[nb][nb], char rule[nb][nb]);
int	is_possible_simple(int nb, char grid[nb][nb]);
void	print_output(char grid[4][4]);


int	is_possible(int nb, char grid[nb][nb], char rule[nb][nb])
{
	if (is_possible_simple(nb, grid) == 0)
		return (0);
	if (is_possible_relative_top(nb, grid, rule) == 0)
		return (0);
	if (is_possible_relative_bottom(nb, grid, rule) == 0)
		return (0);
	if (is_possible_relative_left(nb, grid, rule) == 0)
		return (0);
	if (is_possible_relative_right(nb, grid, rule) == 0)
		return (0);
	return (1);
}

int	is_finished(int nb, char grid[nb][nb])
{
	int	i;
	int	j;

	i = 0;
	while (i < nb)
	{
		j = 0;
		while (j < nb)
		{
			if (grid[i][j] == '\0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_double(int nb, char grid[nb][nb], int pos[2], char c)
{
	int i;

	i = 0;
	while (i < nb)
	{
		if (grid[pos[0]][i] == c || grid[i][pos[1]] == c)
			return (0);
		i++;
	}
	return (1);
}

int	proto_backtracking(int nb, char grid[nb][nb], char rule[4][nb], int pos[2])
{
	char	c;
	int		next_pos[2];

	if (pos[0] == nb)
	{
		if(is_possible(nb, grid, rule) == 1)
			return (1);
		return(0);
	}
	if (pos[1] == nb)
	{
		next_pos[0] = pos[0] + 1;
		next_pos[1] = 0;
		return (proto_backtracking(nb, grid, rule, next_pos));
	}
	c = '1';
	while (c <= '4')
	{
		if (check_double(nb, grid, pos, c) == 1)
			{
				grid[pos[0]][pos[1]] = c;

				next_pos[0] = pos[0];
				next_pos[1] = pos[1] + 1;

				if (proto_backtracking(nb, grid, rule, next_pos) == 1)
					return(1);
				grid[pos[0]][pos[1]] = '\0';
			}
		c++;
	}
	return (0);
}

int	main(void)
{
	char	grid_0[4] = "\04\02"; //"4213";
	char	grid_1[4] = "\03\0\0"; //"3142";
	char	grid_2[4] = "\02\0\0"; //"2431";
	char	grid_3[4] = "\01\04"; //"1324";
	char	grid[4][4];
	char	rule_top[4] = "3123"; //"1222";
	char	rule_bottom[4] = "2421"; //"4231";
	char	rule_left[4] = "2312"; //"1223";
	char	rule_right[4] = "3221"; //"2231";
	char	rule[4][4];
	int		start_pos[2];
	int		i;

	i = 0;
	start_pos[0] = 0;
	start_pos[1] = 0;
	while (i <= 3)
	{
		grid[0][i] = grid_0[i];
		grid[1][i] = grid_1[i];
		grid[2][i] = grid_2[i];
		grid[3][i] = grid_3[i];
		i++;
	}
	i = 0;
	while (i <= 3)
	{
		rule[0][i] = rule_top[i];
		rule[1][i] = rule_bottom[i];
		rule[2][i] = rule_left[i];
		rule[3][i] = rule_right[i];
		i++;
	}
	if (proto_backtracking(4, grid, rule, start_pos))
		printf("finished\n");
	print_output(grid);
}
