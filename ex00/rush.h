/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobaudar <lobaudar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 13:59:05 by lobaudar          #+#    #+#             */
/*   Updated: 2026/07/18 16:39:33 by lobaudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <stdlib.h>
# include <unistd.h>


// basic fill
void	fill_line(t_skyscrapers *basic_cell, int j, int line);
void	fill_basic_cell_left(t_skyscrapers *basic_cell);
void	fill_basic_cell_right(t_skyscrapers *basic_cell);
void	fill_coll(t_skyscrapers *basic_cell, int i, int coll);
void	fill_basic_cell_top(t_skyscrapers *basic_cell);
void	fill_basic_cell_bottom(t_skyscrapers *basic_cell);


// backtracking


typedef struct s_skyscrapers
{
	char	top[4];
	char	bottom[4];
	char	left[4];
	char	right[4];
	char	grid[4][4];
}				t_skyscrapers;


#endif
