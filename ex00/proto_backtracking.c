/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto_backtracking.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 20:56:19 by amanet            #+#    #+#             */
/*   Updated: 2026/07/19 00:14:30 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//
// Note pour moi même au cas ou j'oublie, ou les autres si vous voulez voir mon travail pas fini:
//
// Ce code vérifie si les nombres sont unique par ligne et par colone, et vérifie aussi (pour l'instant que la rule left),
// si la solution est valide selon l'input. Ex: si on a 4: 1234, 1: 4321, etc.... Je me suis arrêté là car il se faisait tard
// et je manquais d'inspi pour vérifier aussi la rule du top, right, et bottom dans une seule fonction...
// Il y a aussi la fonction is_finished qui vérifie que aucune case n'est vide.
//
// Il manque encore toute la partie qui modifie les cases et se sert de mes fonctions pour voir si le resultat est bon,
// et retourner en arrière si ce n'est pas le cas. Aussi appelée backtracking...
//
// Ah et bien sûr comme j'ai pas fini, je n'ai pas osé le soumettre à la norminette...
//

int is_possible_relative(int nb, char grid[nb][nb], char rule[nb][nb]) // Juste left pour l'instant
{
	int	i;
	int	j;
	int k;
	int l;

	i = 0;
	while (i < nb)
	{
		j = k = l = 0;
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

int	is_possible(int nb, char grid[nb][nb])
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
			res += (grid[i][j] - 48 ) + (grid[j][i] - 48);
			j++;
		}
		//printf("%d\n", res);
		if (res != 20)
			return (0);
		i++;
	}
	return (1);
}

int	is_finished(int nb, char grid[nb][nb])
{
	int	i;
	int	j;

	i = 0;
	while(i < nb)
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
	printf("%d\n", is_possible(nb, grid));
	printf("%d\n", is_possible_relative(nb, grid, rule));
	return (0);
}

int	main(void)
{
	char	grid_0[4] = "2314";
	char	grid_1[4] = "3412";
	char	grid_2[4] = "4321";
	char	grid_3[4] = "3421";
	char	grid[4][4];
	char	rule_top[4] = "2214";
	char	rule_bottom[4] = "2331";
	char	rule_left[4] = "3212";
	char	rule_right[4] = "2321";
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
	printf("%s", grid[0]);
}
