/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:17:22 by vstockma          #+#    #+#             */
/*   Updated: 2023/01/27 11:34:49 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	ft_check_num(char *str)
{
	int	i;

	i = 0;
	while (str[i] && ((str[i] >= 7 && str[i] <= 13) || str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int	check_dups(int j, int c, t_var *vars)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (i <= j)
	{
		if (ft_atoi(vars->alist[i]) == c)
			counter++;
		i++;
	}
	if (counter > 1)
		return (1);
	return (0);
}

void	ft_error_check(t_var *vars)
{
	int	j;

	j = 0;
	while (vars->alist[j] != NULL)
	{
		if (ft_check_num(vars->alist[j]) == 1)
			ft_free_arr(1, vars);
		else if (ft_atoi(vars->alist[j]) == 0)
			ft_free_arr(2, vars);
		else if (check_dups(j, ft_atoi(vars->alist[j]), vars) == 1)
			ft_free_arr(3, vars);
		j++;
	}
}
