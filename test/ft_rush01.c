/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meudier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 10:07:40 by meudier           #+#    #+#             */
/*   Updated: 2022/03/20 19:51:07 by aaduan-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft.h"

int	test_value_recursive(int **tab, int num_col, int num_row)
{
	printf ("INPUT:::col -> %d, row -> %d, ", num_col, num_row);
	// print_tab(tab);
	int	count;
	int	test;

	test = 1;
	count = 0;
	printf (":val -> %d\n", (tab)[num_row][num_col]);
	if (num_col == 4 && num_row == 4)
		return (1);
	if ((tab)[num_row][num_col] != 0)
	{
		if (num_col == 4)
		{
			num_row++;
			num_col = 0;
		}
		test_value_recursive(tab, num_col + 1, num_row);
	}

	while (test <= 4)
	{
		
		// if ((tab)[num_row][num_col] == 0)
		// {
			if (check_col(tab, test, num_col) && check_row(tab, test, num_row))
			{
				tab[num_row][num_col] = test;
				printf ("col -> %d, row -> %d, test -> %d\n", num_col, num_row, test);

				printf ("check_left_to_right -> %d, ", check_left_to_right(tab[num_row]));
				printf ("check_right_to_left -> %d, ", check_right_to_left(tab[num_row]));
				printf ("check_up_to_down -> %d, ", check_up_to_down(tab, num_col));
				printf ("check_down_to_up -> %d, \n", check_down_to_up(tab, num_col));

				if (!check_left_to_right(tab[num_row]) && !check_right_to_left(tab[num_row]) 
				&& !check_up_to_down(tab, num_col) && !check_down_to_up(tab, num_col))
				{
					if (num_col == 4)
					{
						num_row++;
						num_col = 0;
					}
					if (test_value_recursive(tab, num_col + 1, num_row) == 1)
					{
						printf("\n\n");
						print_tab(tab);
						printf("\n\n");
						return (1);
					}
						

					// test = 0;
				}
				else
					tab[num_row][num_col] = 0;
				// if (num_col < 4)
				// 	test_value_recursive(tab, num_col + 1, num_row);
				// else if (num_col == 4 && num_row < 4 
				// && check_left_to_right(tab[num_row]) 
				// && check_right_to_left(tab[num_row]))
				// {
				// 	num_row++;
				// 	num_col = 1;
				// 	test = 0;
				// }
				// if (num_row == 4  && (!check_up_to_down(tab, num_col) || !check_down_to_up(tab, num_col)))
				// 	return (0);
				// if (num_col == 4 && num_row == 4)
				// {
				// 	print_tab(tab);
				// 	return (1);
				// 	tab[num_row][num_col] = 0;
				// }
			}
			//tab[num_row][num_col] = 0;
			test++;
		// }
		// else
		// {
		// 	if (num_col == 4)
		// 	{
		// 		num_row++;
		// 		num_col = 0;
		// 	}
		// 	// else
		// 	// 	num_col++;
		// 	if (test_value_recursive(tab, num_col + 1, num_row) == 1)
		// 	{
		// 		// print_tab(tab);
		// 		return (1);
		// 	}
		// 	//test_value_recursive(tab, num_col + 1, num_row);
		// }
	}
	// tab[num_row][num_col] = 0;
	return (0);
}

int	main(int argc, char **argv)
{
	int		error;
	int		**tab;

	error = 0;
	if (!ft_arg_is_ok(argv[1], argc))
		error = 1;
	if (!init_tab(&tab))
		error = 1;
	match_tab_with_arg(&tab, argv[1]);
	match_tab_with_arg_2(&tab, argv[1]);
	rules4_top(&tab);
	rules4_bottom(&tab);
	rules4_left(&tab);
	rules4_right(&tab);
	printf ("TTTTTTTTTTT: %d \n", test_value_recursive(tab, 1, 1));
	print_tab(tab);
	if (error)
		write (1, "Error", 5);
	else
		if (test_value_recursive(tab, 1, 1))
			write (1, "Error", 5);;
	return (0);
}
