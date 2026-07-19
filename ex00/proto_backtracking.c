/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto_backtracking.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobaudar <lobaudar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 20:56:19 by amanet            #+#    #+#             */
/*   Updated: 2026/07/19 13:11:17 by lobaudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	is_possible_relative_left(int nb, char grid[nb][nb], char rule[nb][nb]);
int	is_possible_relative_top(int nb, char grid[nb][nb], char rule[nb][nb]);
int	is_possible_relative_bottom(int nb, char grid[nb][nb], char rule[nb][nb]);
int	is_possible_relative_right(int nb, char grid[nb][nb], char rule[nb][nb]);
int	is_possible_simple(int nb, char grid[nb][nb]);

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

int	proto_backtracking(int nb, char grid[nb][nb], char rule[nb][nb])
{
/*	int	i;

	i = 1;
	if (is_finished(nb, grid) == 1)
		return (1);
	while(i <= 4)
	{

	}*/
	printf("%d\n", is_possible(nb, grid, rule));
	//printf("%d\n", is_possible_relative(nb, grid, rule));
	return (0);
}

int	main(void)
{
	char	grid_0[4] = "4213";
	char	grid_1[4] = "3142";
	char	grid_2[4] = "2431";
	char	grid_3[4] = "1324";
	char	grid[4][4];
	char	rule_top[4] = "1222";
	char	rule_bottom[4] = "4231";
	char	rule_left[4] = "1223";
	char	rule_right[4] = "2231";
	char	rule[4][4];
	int		i;

	i = 0;
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
	proto_backtracking(4, grid, rule);
	printf("%s", rule[0]);
}
