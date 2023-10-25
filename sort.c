/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:33:59 by vstockma          #+#    #+#             */
/*   Updated: 2023/02/27 10:24:35 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	ft_radix(t_var *vars, int x)
{
	int	s;
	int	i;
	int	j;

	s = vars->a;
	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < s)
		{
			if ((ft_atoi(vars->alist[0]) & (1 << i)) != 0)
				ft_ra(vars);
			else
				ft_pb(vars);
			j++;
		}
		while (vars->b != 0)
			ft_pa(vars);
		i++;
	}
}

//(ft_atoi(vars->alist[0]) >> i & 1)

void	ft_big(t_var *vars)
{
	if (vars->a <= 100)
		ft_radix(vars, 7);
	else if (vars->a <= 500)
		ft_radix(vars, 9);
	else
		ft_radix(vars, 31);
}

void	ft_small(t_var *vars)
{
	if (vars->a == 2)
		ft_sort_comb2(vars);
	else if (vars->a == 3)
		ft_sort_comb3(vars);
	else if (vars->a == 4)
		ft_sort_comb4(vars);
	else if (vars->a == 5)
		ft_sort_comb5(vars);
}

void	ft_start_sort(t_var *vars)
{
	if (vars->a <= 5)
		ft_small(vars);
	else
		ft_big(vars);
}
