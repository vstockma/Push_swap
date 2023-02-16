/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:54:35 by vstockma          #+#    #+#             */
/*   Updated: 2023/02/14 12:29:33 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void    ft_sort_comb2(t_var *vars)
{
    if (ft_atoi(vars->alist[1]) < ft_atoi(vars->alist[0]))
        ft_ra(vars);
}

void    ft_sort_comb3(t_var *vars)
{
    if (ft_atoi(vars->alist[2]) > ft_atoi(vars->alist[1]) &&
        ft_atoi(vars->alist[1]) < ft_atoi(vars->alist[0]) &&
        ft_atoi(vars->alist[2]) > ft_atoi(vars->alist[0]))
        ft_sa(vars);
    else if (ft_atoi(vars->alist[2]) < ft_atoi(vars->alist[1]) &&
            ft_atoi(vars->alist[1]) < ft_atoi(vars->alist[0]) &&
            ft_atoi(vars->alist[2]) < ft_atoi(vars->alist[0]))
    {
        ft_sa(vars);
        ft_rra(vars);
    }
    else if (ft_atoi(vars->alist[2]) > ft_atoi(vars->alist[1]) &&
            ft_atoi(vars->alist[1]) < ft_atoi(vars->alist[0]) &&
            ft_atoi(vars->alist[2]) < ft_atoi(vars->alist[0]))
        ft_ra(vars);
    else if (ft_atoi(vars->alist[2]) < ft_atoi(vars->alist[1]) &&
            ft_atoi(vars->alist[1]) > ft_atoi(vars->alist[0]) &&
            ft_atoi(vars->alist[2]) > ft_atoi(vars->alist[0]))
    {
        ft_sa(vars);
        ft_ra(vars);
    }
    else if (ft_atoi(vars->alist[2]) < ft_atoi(vars->alist[1]) &&
            ft_atoi(vars->alist[1]) > ft_atoi(vars->alist[0]) &&
            ft_atoi(vars->alist[2]) < ft_atoi(vars->alist[0]))
        ft_rra(vars);
}

void    ft_sort_comb4(t_var *vars)
{    
    ft_get_minval(vars);
    ft_to_top(vars);
    ft_sort_comb3(vars);
    ft_pa(vars);
}

void    ft_sort_comb5(t_var *vars)
{
    ft_get_minval(vars);
    ft_to_top(vars);
    ft_sort_comb4(vars);
    ft_pa(vars); 
}