/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:29:27 by vstockma          #+#    #+#             */
/*   Updated: 2023/02/27 10:16:08 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	ft_sa(t_var *vars)
{
	char	*temp;

	if (vars->a == 0 || vars->a == 1)
		return ;
	temp = vars->alist[0];
	vars->alist[0] = vars->alist[1];
	vars->alist[1] = temp;
	if (vars->sw == 0)
		ft_printf("sa\n");
}

void	ft_sb(t_var *vars)
{
	char	*temp;

	if (vars->b == 0 || vars->b == 1)
		return ;
	temp = vars->blist[0];
	vars->blist[0] = vars->blist[1];
	vars->blist[1] = temp;
	if (vars->sw == 0)
		ft_printf("sb\n");
}

void	ft_pa(t_var *vars)
{
	int	i;
	int	j;

	i = 0;
	j = vars->a;
	if (vars->b == 0)
		return ;
	if (vars->a == 0)
		vars->alist[0] = vars->blist[0];
	else
	{
		while (i < vars->a)
		{
			vars->alist[j] = vars->alist[j - 1];
			j--;
			i++;
		}
		vars->alist[0] = vars->blist[0];
	}
	ft_new(1, vars);
	vars->b--;
	vars->a++;
	ft_printf("pa\n");
}

void	ft_pb(t_var *vars)
{
	int	i;
	int	j;

	i = 0;
	j = vars->b;
	if (vars->a == 0)
		return ;
	if (vars->b == 0)
		vars->blist[0] = vars->alist[0];
	else
	{
		while (i < vars->b)
		{
			vars->blist[j] = vars->blist[j - 1];
			j--;
			i++;
		}
		vars->blist[0] = vars->alist[0];
	}
	ft_new(2, vars);
	vars->a--;
	vars->b++;
	ft_printf("pb\n");
}

void	ft_new(int x, t_var *vars)
{
	int	i;

	i = 0;
	if (x == 1)
	{
		while (i < vars->b)
		{
			vars->blist[i] = vars->blist[i + 1];
			i++;
		}
		vars->blist[i] = NULL;
	}
	else
	{
		while (i < vars->a)
		{
			vars->alist[i] = vars->alist[i + 1];
			i++;
		}
		vars->alist[i] = NULL;
	}
}
