/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:09:47 by vstockma          #+#    #+#             */
/*   Updated: 2023/01/26 13:31:23 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	ft_put_list(int ac, char **av, t_var *vars)
{
	int	i;

	i = 0;
	vars->alist = malloc(sizeof(char *) * ac);
	if (!vars->alist)
	{
		free(vars->alist);
		free(vars);
		exit(1);
	}
	vars->blist = malloc(sizeof(char *) * ac);
	if (!vars->blist)
	{
		free(vars->alist);
		free(vars->blist);
		free(vars);
		exit(1);
	}
	while (i < ac - 1)
	{
		vars->alist[i] = av[i + 1];
		i++;
	}
	vars->alist[i] = NULL;
}

int	main(int ac, char **av)
{
	t_var	*vars;

	if (ac == 1)
	{
		ft_printf("Error\nNot enough arguments!\n");
		return (1);
	}
	vars = (t_var *)malloc(sizeof(t_var));
	vars->index = ac - 2;
	ft_init_vars(vars);
	ft_put_list(ac, av, vars);
	ft_error_check(vars);
	ft_freeee(vars);
	return (0);
}
