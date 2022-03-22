/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaduan-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:28:58 by aaduan-b          #+#    #+#             */
/*   Updated: 2022/03/20 20:26:35 by aaduan-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	check_row(int **row, int test, int num_row)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (test == row[num_row][i])
			return (0);
		i ++;
	}
	return (1);
}

int	check_col(int **col, int test, int col_num)
{
	int	y;

	y = 1;
	while (y < 5)
	{
		if (test == col[y][col_num])
			return (0);
		y++;
	}
	return (1);
}

int	check_left_to_right(int *row)
{
	int	i;
	int	count;
	int	wall_4;

	wall_4 = row[1];
	i = 1;
	count = 1;
	while (i < 5)
	{
		if (row[i] == 0)
			return (0);
		if (row[i] > wall_4)
		{
			wall_4 = row[i];
			count ++;
		}
		// if (row[i] == 4)
		// 	wall_4 = 1;
		// if (row[i] < row[i + 1] && !wall_4)
		// 	count++;
		i++;
	}
	printf ("count -> %d || row[0] -> %d | row[1] -> %d, row[2] -> %d, row[3] -> %d, row[4] -> %d | row[5] -> %d.\n", count, row[0], row[1], row[2], row[3], row[4], row[5]);
	if (count == row[0])
		return (1);
	else
		return (0);
}

int	check_right_to_left(int *row)
{
	int	i;
	int	count;
	int	wall_4;

	wall_4 = row[4];
	i = 4;
	count = 1;
	while (i > 1)
	{
		if (row[i] == 0)
			return (0);
		if (row[i] > wall_4)
		{
			wall_4 = row[i];
			count ++;
		}
		// if (row[i] == 4)
		// 	wall_4 = 1;
		// if (row[i] < row[i - 1] && !wall_4)
		// 	count++;
		i--;
	}
	if (count == row[5])
		return (1);
	else
		return (0);
}

int	check_up_to_down(int **col, int num_col)
{
	int	i;
	int	count;
	int	wall_4;

	wall_4 = col[1][num_col];
	i = 1;
	count = 1;
	while (i < 5)
	{
		if (col[i][num_col] == 0)
			return (0);
		if (col[i][num_col] > wall_4)
		{
			wall_4 = col[i][num_col];
			count ++;
		}
		// if (col[i][num_col] == 4)
		// 	wall_4 = 1;
		// if (col[i][num_col] < col[i + 1][num_col] && !wall_4)
		// 	count++;
		i++;
	}
	if (count == col[0][num_col])
		return (1);
	else
		return (0);
}

int	check_down_to_up(int **col, int num_col)
{
	int	i;
	int	count;
	int	wall_4;

	wall_4 = col[4][num_col];
	i = 4;
	count = 1;
	while (i > 1)
	{
		if (col[i][num_col] == 0)
			return (0);
		if (col[i][num_col] > wall_4)
		{
			wall_4 = col[i][num_col];
			count ++;
		}
		// if (col[i][num_col] == 4)
		// 	wall_4 = 1;
		// if (col[i][num_col] < col[i - 1][num_col] && !wall_4)
		// 	count++;
		i--;
	}
	if (count == col[5][num_col])
		return (1);
	else
		return (0);
}
