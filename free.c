/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 10:47:17 by vstockma          #+#    #+#             */
/*   Updated: 2023/02/27 11:08:32 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	ft_init_vars(t_var *vars)
{
	vars->min_value = 0;
	vars->min_pos = 0;
	vars->a = vars->index;
	vars->b = 0;
	vars->sw = 0;
}

void	ft_message(int i)
{
	if (i == 1)
		ft_printf("Error!\nArgument is not an integer!\n");
	else if (i == 2)
		ft_printf("Error!\nNumber not in integer range!\n");
	else if (i == 3)
		ft_printf("Error!\nDublicate numbers!\n");
	else if (i == 4)
		return ;
}

void	ft_free_arr(int i, t_var *vars)
{
	ft_message(i);
	free(vars->blist);
	free(vars->alist);
	free(vars);
	exit(1);
}

void	ft_freeee(t_var *vars)
{
	int	i;

	i = 0;
	while (i < vars->a)
	{
		free(vars->alist[i]);
		i++;
	}
	free(vars->blist);
	free(vars->alist);
	free(vars->copy);
	free(vars);
	exit(1);
}
