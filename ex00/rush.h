/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobaudar <lobaudar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 13:59:05 by lobaudar          #+#    #+#             */
/*   Updated: 2026/07/18 14:43:06 by lobaudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <stdlib.h>
# include <unistd.h>


typedef struct s_skyscrapers
{
	char	top[4];
	char	bottom[4];
	char	left[4];
	char	right[4];
	char	grid[4][4];
}				t_skyscrapers;


#endif
