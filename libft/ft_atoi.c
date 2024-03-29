/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:06:06 by vstockma          #+#    #+#             */
/*   Updated: 2023/02/15 12:38:01 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
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
	return ((int)value * a);
}
/*
int	main()
{
	char	str[] = "\x079";

	printf("%d", ft_atoi(str));
	return (0);

	return ((int)value * a);
}
*/
