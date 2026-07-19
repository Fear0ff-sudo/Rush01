/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartign <lmartign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 11:23:20 by lmartign          #+#    #+#             */
/*   Updated: 2026/07/19 14:14:09 by lmartign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_asign_params(char *str)
{
	int		i;
	int		j;
	char	**params;

	i = 0;
	j = 0;
	while (i <= 7)
		params[0][j++] = str[i++];
	params[0][j] = '\0';
	j = 0;
	while (i <= 14)
		params[1][j++] = str[i++];
	params[1][j] = '\0';
	j = 0;
	while (i <= 21)
		params[2][j++] = str[i++];
	params[2][j] = '\0';
	j = 0;
	while (i <= 28)
		params[3][j++] = str[i++];
	params[3][j] = '\0';
	params[4][4] = '\0';
	return (params);
}
