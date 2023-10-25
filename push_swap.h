/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:15:05 by vstockma          #+#    #+#             */
/*   Updated: 2023/02/27 11:01:31 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_var
{
	char	**alist;
	char	**blist;
	char	**copy;
	int		index;
	int		a;
	int		b;
	int		sw;
	int		min_value;
	int		min_pos;
}			t_var;

//push_swap.c
void		ft_put_list(int ac, char **av, t_var *vars);

//error.c
int			ft_trash_atoi(const char *str);
int			ft_check_num(char *str);
int			check_dups(int j, int c, t_var *vars);
int			ft_check_order(t_var *vars);
void		ft_error_check(t_var *vars);

//free.c
void		ft_init_vars(t_var *vars);
void		ft_message(int i);
void		ft_free_arr(int i, t_var *vars);
void		ft_freeee(t_var *vars);

//operations1.c
void		ft_sa(t_var *vars);
void		ft_sb(t_var *vars);
void		ft_pa(t_var *vars);
void		ft_pb(t_var *vars);
void		ft_new(int x, t_var *vars);

//operations2.c
void		ft_ra(t_var *vars);
void		ft_rb(t_var *vars);
void		ft_rra(t_var *vars);
void		ft_rrb(t_var *vars);

//operations3.c
void		ft_ss(t_var *vars);
void		ft_rr(t_var *vars);
void		ft_rrr(t_var *vars);

//logic.c
void		ft_init(t_var *vars);
void		ft_copy_arr(t_var *vars);
void		ft_sort_tab(t_var *vars);
void		ft_index(t_var *vars);

//sort.c
void		ft_radix(t_var *vars, int x);
void		ft_big(t_var *vars);
void		ft_small(t_var *vars);
void		ft_start_sort(t_var *vars);

//sort_small.c
void		ft_sort_comb2(t_var *vars);
void		ft_sort_comb3(t_var *vars);
void		ft_ext(t_var *vars);
void		ft_sort_comb4(t_var *vars);
void		ft_sort_comb5(t_var *vars);

//more_functions.c
void		ft_get_minval(t_var *vars);
void		ft_to_top(t_var *vars);

#endif
