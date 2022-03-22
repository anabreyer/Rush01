/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: aaduan-b <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2022/03/20 19:29:13 by aaduan-b	       #+#    #+#	      */
/*   Updated: 2022/03/20 19:39:56 by aaduan-b         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "ft_arg.h"

int	ft_check_4_1(char *arg)
{
	int	i;
	int	j;

	i = 0;
	j = 8;
	while (i <= 8)
	{
		if (arg[i] == '4' && arg[j] != '1')
			return (0);
		i += 2;
		j += 2;
	}
	i = 24;
	j = 16;
	while (i <= 32)
	{
		if (arg[i] == '4' && arg[j] != '1')
			return (0);
		i += 2;
		j += 2;
	}
	return (1);
}

int	ft_check_4_1_2(char *arg)
{
	int	i;
	int	j;

	i = 8;
	j = 0;
	while (i <= 16)
	{
		if (arg[i] == '4' && arg[j] != '1')
			return (0);
		i += 2;
		j += 2;
	}
	i = 16;
	j = 24;
	while (i <= 24)
	{
		if (arg[i] == '4' && arg[j] != '1')
			return (0);
		i += 2;
		j += 2;
	}
	return (1);
}

int	ft_arg_is_ok(char *arg, int argc)
{
	int	i;
	int	j;

	if (argc != 2)
		return (0);
	i = 0;
	while ((arg[i] >= '1' && arg[i] <= '4' && arg[i + 1] == ' ')
		|| (arg[i + 1] >= '1' && arg[i + 1] <= '4' && arg[i] == ' '))
		i++;
	if (!(i == 30 && i == ft_strlen(arg) - 1 && arg[i] != ' '))
		return (0);
	if (!ft_check_4_1(arg) && !ft_check_4_1_2(arg))
		return (0);
	return (1);
}
