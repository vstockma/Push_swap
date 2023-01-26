/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:29:27 by vstockma          #+#    #+#             */
/*   Updated: 2023/01/26 13:49:17 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void    ft_sa(t_var *vars)
{
    char    *temp;

    temp = vars->alist[0];
    vars->alist[0] = vars->alist[1];
    vars->alist[1] = temp;
}

void    ft_sb(t_var *vars)
{
    char    *temp;

    temp = vars->blist[0];
    vars->blist[0] = vars->blist[1];
    vars->blist[1] = temp;
}

void    ft_pa(t_var *vars)
{
    int i;
    char *temp;

    i = 0;
    temp = 
    vars->b--;
    vars->a++;
}

void    ft_pb(t_var *vars)
{
    int i;
    int j;
    char *temp;

    i = 0;
    j = vars->b;
    while (i < vars->b)
    {
        vars->blist[j] = vars->blist[j - 1];
        j--;
    }
    vars->blist[0] = vars->alist[0];
    while (i < vars->a)
    {

    }
    vars->a--;
    vars->b++;;
}