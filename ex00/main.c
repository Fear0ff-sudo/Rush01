/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobaudar <lobaudar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 13:20:08 by lobaudar          #+#    #+#             */
/*   Updated: 2026/07/19 14:44:08 by lobaudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_valid(char *av);
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
