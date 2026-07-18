/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobaudar <lobaudar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 13:59:05 by lobaudar          #+#    #+#             */
/*   Updated: 2026/07/18 14:13:33 by lobaudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <stdlib.h>
# include <unistd.h>


typedef struct s_skycrapers
{
	char	top[3];
	char	bottom[3];
	char	left[3];
	char	right[3];
	char	**grid;
}				t_skycrapers;


#endif
