/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaduan-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:30:54 by aaduan-b          #+#    #+#             */
/*   Updated: 2022/03/20 20:32:29 by aaduan-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	init_tab(int ***tab)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	*tab = malloc(sizeof(int *) * 6);
	while (y < 6)
	{
		(*tab)[y] = malloc(sizeof(int) * 6);
		y++;
	}
	y = 0;
	while (y < 6)
	{
		x = 0;
		while (x < 6)
		{
			(*tab)[y][x] = 0;
			x++;
		}
		y++;
	}
	if (!*tab)
		return (0);
	else
		return (1);
}

void	match_tab_with_arg(int ***tab, char *arg)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= 6)
	{
		(*tab)[0][j] = arg[i] - '0';
		j++;
		i += 2;
	}
	j = 1;
	while (i <= 14)
	{
		(*tab)[5][j] = arg[i] - '0';
		j++;
		i += 2;
	}
}

void	match_tab_with_arg_2(int ***tab, char *arg)
{
	int	i;
	int	j;

	i = 16;
	j = 1;
	while (i <= 22)
	{
		(*tab)[j][0] = arg[i] - '0';
		i += 2;
		j++;
	}
	j = 1;
	while (i <= 30)
	{
		(*tab)[j][5] = arg[i] - '0';
		i += 2;
		j++;
	}
}
