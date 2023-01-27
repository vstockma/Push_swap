/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:29:54 by vstockma          #+#    #+#             */
/*   Updated: 2023/01/27 12:15:01 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	ft_ra(t_var *vars)
{
	char	*temp;
	int		i;

	i = 0;
	temp = vars->alist[0];
	while (i < vars->index)
	{
		vars->alist[i] = vars->alist[i + 1];
		i++;
	}
	vars->alist[vars->a - 1] = temp;
	if (vars->sw == 0)
		ft_printf("ra\n");
}

void	ft_rb(t_var *vars)
{
	char	*temp;
	int		i;

	i = 0;
	temp = vars->blist[0];
	while (i < vars->index)
	{
		vars->blist[i] = vars->blist[i + 1];
		i++;
	}
	vars->blist[vars->b - 1] = temp;
	if (vars->sw == 0)
		ft_printf("rb\n");
}

void	ft_rra(t_var *vars)
{
	char	*temp;
	int		i;

	i = vars->a - 1;
	temp = vars->alist[vars->a - 1];
	while (i > 0)
	{
		vars->alist[i] = vars->alist[i - 1];
		i--;
	}
	vars->alist[0] = temp;
	if (vars->sw == 0)
		ft_printf("rra\n");
}

void	ft_rrb(t_var *vars)
{
	char	*temp;
	int		i;

	i = vars->b - 1;
	temp = vars->blist[vars->b - 1];
	while (i > 0)
	{
		vars->blist[i] = vars->blist[i - 1];
		i--;
	}
	vars->blist[0] = temp;
	if (vars->sw == 0)
		ft_printf("rrb\n");
}
