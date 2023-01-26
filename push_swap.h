/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:15:05 by vstockma          #+#    #+#             */
/*   Updated: 2023/01/26 13:31:09 by vstockma         ###   ########.fr       */
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
    int     index;
    int     a;
    int     b;
}			t_var;

//push_swap.c
void		ft_put_list(int ac, char **av, t_var *vars);

//error.c
int			ft_check_num(char *str);
int			check_dups(int j, int c, t_var *vars);
void		ft_error_check(t_var *vars);

//free.c
void    ft_init_vars(t_var *vars);
void		ft_message(int i);
void		ft_free_arr(int i, t_var *vars);
void		ft_freeee(t_var *vars);

#endif
