/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartign <lmartign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 13:20:08 by lobaudar          #+#    #+#             */
/*   Updated: 2026/07/19 14:57:28 by lmartign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_valid(char *str);
char	**ft_assign_params(char *str);
char	**basic_grid(char **params, char **grid);

int	main(int ac, char **av)
{
	char	grid[4][4];
	char	**params;

	if (ac != 2)
		return (write(1, "Error\n", 1));
	if (is_valid(av[1]) == 1)
		return (write(1, "Error\n", 1));
	params = ft_assign_params(av[1]);
	grid = basic_grid(params, grid);
}
