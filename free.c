/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 10:47:17 by vstockma          #+#    #+#             */
/*   Updated: 2023/02/14 12:19:39 by vstockma         ###   ########.fr       */
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
	ft_printf("Error!\n");
	if (i == 1)
		ft_printf("Argument is not an integer!\n");
	else if (i == 2)
		ft_printf("Number not in integer range!\n");
	else if (i == 3)
		ft_printf("Dublicate numbers!\n");
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
	free(vars->blist);
	free(vars->alist);
	free(vars);
	exit(1);
}
