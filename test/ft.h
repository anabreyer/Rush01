/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaduan-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:27:57 by aaduan-b          #+#    #+#             */
/*   Updated: 2022/03/20 19:27:59 by aaduan-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALL_FT
#define ALL_FT

int	check_down_to_up(int **col, int num_col);
int	check_row(int **row, int test, int num_row);
int	check_col(int **col, int test, int col_num);
int	check_left_to_right(int *row);
int	check_right_to_left(int *row);
int	check_up_to_down(int **col, int num_col);
int	ft_strlen(char *str);
void    ft_putchar(char c);
void	rules4_top(int ***tab);
void	rules4_left(int ***tab);
void	rules4_bottom(int ***tab);
void	rules4_right(int ***tab);
void	print_tab(int **tab);
int	init_tab(int ***tab);
void	match_tab_with_arg(int ***tab, char *arg);
int	ft_arg_is_ok(char *arg, int argc);
int	ft_check_4_1(char *arg);
int	ft_check_4_1_2(char *arg);
void    match_tab_with_arg_2(int ***tab, char *arg);

#endif 
