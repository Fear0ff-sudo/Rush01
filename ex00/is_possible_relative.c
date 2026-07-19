/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_possible_relative.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobaudar <lobaudar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 20:56:19 by amanet            #+#    #+#             */
/*   Updated: 2026/07/19 13:11:32 by lobaudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_possible_relative_left(int nb, char grid[nb][nb], char rule[nb][nb])
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	while (i < nb)
	{
		j = 0;
		k = 0;
		l = 0;
		while (j < nb)
		{
			if (l < grid[i][j] - 48)
			{
				l = grid[i][j] - 48;
				k++;
			}
			j++;
		}
		if (k != rule[2][i] - 48)
			return (0);
		i++;
	}
	return (1);
}

int	is_possible_relative_top(int nb, char grid[nb][nb], char rule[nb][nb])
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	while (i < nb)
	{
		j = 0;
		k = 0;
		l = 0;
		while (j < nb)
		{
			if (l < grid[j][i] - 48)
			{
				l = grid[j][i] - 48;
				k++;
			}
			j++;
		}
		if (k != rule[0][i] - 48)
			return (0);
		i++;
	}
	return (1);
}

int	is_possible_relative_bottom(int nb, char grid[nb][nb], char rule[nb][nb])
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	while (i < nb)
	{
		k = 0;
		l = 0;
		j = nb -1;
		while (j >= 0)
		{
			if (l < grid[j][i] - 48)
			{
				l = grid[j][i] - 48;
				k++;
			}
			j--;
		}
		if (k != rule[1][i] - 48)
			return (0);
		i++;
	}
	return (1);
}

int	is_possible_relative_right(int nb, char grid[nb][nb], char rule[nb][nb])
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	while (i < nb)
	{
		k = 0;
		l = 0;
		j = nb -1;
		while (j >= 0)
		{
			if (l < grid[i][j] - 48)
			{
				l = grid[i][j] - 48;
				k++;
			}
			j--;
		}
		if (k != rule[3][i] - 48)
			return (0);
		i++;
	}
	return (1);
}

int	is_possible_simple(int nb, char grid[nb][nb])
{
	int	i;
	int	j;
	int	res;

	i = 0;
	while (i < nb)
	{
		res = 0;
		j = 0;
		while (j < nb)
		{
			if (!(grid[i][j] >= '0' && grid[i][j] <= '9'))
				return (0);
			res += (grid[i][j] - 48) + (grid[j][i] - 48);
			j++;
		}
		if (res != 20)
			return (0);
		i++;
	}
	return (1);
}
