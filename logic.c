/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:49:37 by vstockma          #+#    #+#             */
/*   Updated: 2023/02/27 10:16:00 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	ft_init(t_var *vars)
{
	ft_copy_arr(vars);
	ft_sort_tab(vars);
	ft_index(vars);
}

void	ft_copy_arr(t_var *vars)
{
	int	i;

	i = 0;
	vars->copy = malloc(sizeof(char *) * (vars->index + 1));
	if (!vars->copy)
	{
		free(vars->copy);
		free(vars);
		exit(1);
	}
	while (i < vars->index)
	{
		vars->copy[i] = vars->alist[i];
		i++;
	}
	vars->copy[i] = NULL;
}

void	ft_sort_tab(t_var *vars)
{
	char	*temp;
	int		a;
	int		i;

	a = 0;
	while (a < vars->index)
	{
		i = a + 1;
		while (i < vars->index)
		{
			if (ft_atoi(vars->copy[a]) > ft_atoi(vars->copy[i]))
			{
				temp = vars->copy[a];
				vars->copy[a] = vars->copy[i];
				vars->copy[i] = temp;
			}
			i++;
		}
		a++;
	}
}

void	ft_index(t_var *vars)
{
	int	i;
	int	j;

	i = 0;
	while (vars->alist[i] != NULL)
	{
		j = 0;
		while (vars->copy[j] != NULL)
		{
			if (ft_atoi(vars->alist[i]) == ft_atoi(vars->copy[j]))
			{
				vars->alist[i] = ft_itoa(j);
				break ;
			}
			j++;
		}
		i++;
	}
}
