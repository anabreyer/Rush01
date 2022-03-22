/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules_of_4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaduan-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:28:27 by aaduan-b          #+#    #+#             */
/*   Updated: 2022/03/20 19:28:31 by aaduan-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	rules4_top(int ***tab)
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		if ((*tab)[0][i] == 4)
		{
			j = 1;
			while (j < 5)
			{
				(*tab)[j][i] = j;
				j++;
			}
		}
		if ((*tab)[0][i] == 1)
			(*tab)[1][i] = 4;
		i++;
	}
}

void	rules4_left(int ***tab)
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		if ((*tab)[i][0] == 4)
		{
			j = 1;
			while (j < 5)
			{
				(*tab)[i][j] = j;
				j++;
			}
		}
		if ((*tab)[i][0] == 1)
			(*tab)[i][1] = 4;
		i++;
	}
}

void	rules4_bottom(int ***tab)
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		if ((*tab)[5][i] == 4)
		{
			j = 1;
			while (j < 5)
			{
				(*tab)[j][i] = 5 - j;
				j++;
			}
		}
		if ((*tab)[5][i] == 1)
			(*tab)[4][i] = 4;
		i++;
	}
}

void	rules4_right(int ***tab)
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		if ((*tab)[i][5] == 4)
		{
			j = 1;
			while (j < 5)
			{
				(*tab)[i][j] = 5 - j;
				j++;
			}
		}
		if ((*tab)[i][5] == 1)
			(*tab)[i][4] = 4;
		i++;
	}
}
