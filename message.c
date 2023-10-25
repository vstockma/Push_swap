/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   message.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:30:17 by vstockma          #+#    #+#             */
/*   Updated: 2023/02/27 10:15:45 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

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
