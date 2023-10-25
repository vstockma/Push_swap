/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:15:45 by vstockma          #+#    #+#             */
/*   Updated: 2023/02/27 10:34:03 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	ft_to_top(t_var *vars)
{
	int	i;

	if (vars->min_pos < 0)
		return ;
	i = vars->min_pos;
	if (vars->a / 2 >= vars->min_pos)
	{
		while (i > 0)
		{
			ft_ra(vars);
			i--;
		}
	}
	else if (vars->a / 2 < vars->min_pos)
	{
		while (i <= vars->a - 1)
		{
			ft_rra(vars);
			i++;
		}
	}
	ft_pb(vars);
}

void	ft_get_minval(t_var *vars)
{
	int	i;

	i = 0;
	vars->min_value = ft_atoi(vars->alist[0]);
	while (i < vars->a)
	{
		if (vars->min_value > ft_atoi(vars->alist[i]))
		{
			vars->min_value = ft_atoi(vars->alist[i]);
			vars->min_pos = i;
		}
		i++;
	}
}
