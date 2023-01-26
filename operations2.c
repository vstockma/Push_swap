/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:29:54 by vstockma          #+#    #+#             */
/*   Updated: 2023/01/26 13:07:46 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void    ft_ra(t_var *vars)
{
    char    *temp;
    int i;

    i = 0;
    temp = vars->alist[0];
    while (i <= vars->index)
    {
        vars->alist[i] = vars->alist[i + 1];
        i++;
    }
    vars->alist[vars->index] = temp;
}

void    ft_rb(t_var *vars)
{
    char    *temp;
    int i;

    i = 0;
    temp = vars->blist[0];
    while (i <= vars->index)
    {
        vars->blist[i] = vars->blist[i + 1];
        i++;
    }
    vars->blist[vars->index] = temp;
}

void    ft_rra(t_var *vars)
{
    
}

void    ft_rrb(t_var *vars)
{
    
}
