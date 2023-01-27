/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:07:06 by vstockma          #+#    #+#             */
/*   Updated: 2023/01/27 12:37:30 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	ft_ss(t_var *vars)
{
	vars->sw = 1;
	ft_sa(vars);
	ft_sb(vars);
	ft_printf("ss\n");
	vars->sw = 0;
}

void	ft_rr(t_var *vars)
{
	vars->sw = 1;
	ft_ra(vars);
	ft_rb(vars);
	ft_printf("rr\n");
	vars->sw = 0;
}

void	ft_rrr(t_var *vars)
{
	vars->sw = 1;
	ft_rra(vars);
	ft_rrb(vars);
	ft_printf("rrr\n");
	vars->sw = 0;
}
