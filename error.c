/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:17:22 by vstockma          #+#    #+#             */
/*   Updated: 2023/02/27 10:46:17 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	ft_trash_atoi(const char *str)
{
	int		i;
	int		a;
	long	value;

	value = 0;
	i = 0;
	a = 1;
	while (str[i] && ((str[i] >= 7 && str[i] <= 13) || str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			a = -a;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		value = 10 * value + (str[i] - 48);
		i++;
		if (value * a < -2147483648)
			return (0);
		else if (value * a > 2147483647)
			return (0);
	}
	return (1);
}

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

int	ft_check_order(t_var *vars)
{
	int	i;

	i = 0;
	while (vars->alist[i + 1] != NULL)
	{
		if (ft_atoi(vars->alist[i]) < ft_atoi(vars->alist[i + 1]))
			i++;
		else
			return (1);
	}
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
		else if (ft_trash_atoi(vars->alist[j]) == 0)
			ft_free_arr(2, vars);
		else if (check_dups(j, ft_atoi(vars->alist[j]), vars) == 1)
			ft_free_arr(3, vars);
		j++;
	}
	if (ft_check_order(vars) == 0)
		ft_free_arr(4, vars);
}
