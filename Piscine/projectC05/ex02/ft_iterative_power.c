/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:54:10 by frtan             #+#    #+#             */
/*   Updated: 2023/08/09 11:07:05 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			result *= nb;
			power--;
		}
	}
	return (result);
}
/*
#include <stdio.h>

int             main(void)
{
        printf("-2 ^-1 = %d \n", ft_iterative_power(-2, -1));
        printf("-2 ^ 0 = %d \n", ft_iterative_power(-2, 0));
        printf("-2 ^ 1 = %d \n", ft_iterative_power(-2, 1));
        printf("-2 ^ 2 = %d \n", ft_iterative_power(-2, 2));
        printf(" 0 ^-1 = %d \n", ft_iterative_power(0, -1));
        printf(" 0 ^ 0 = %d \n", ft_iterative_power(0, 0));
        printf(" 0 ^ 2 = %d \n", ft_iterative_power(0, 2));
        printf(" 4 ^ 0 = %d \n", ft_iterative_power(4, 0));
        printf(" 4 ^ 1 = %d \n", ft_iterative_power(4, 1));
        printf(" 4 ^ 3 = %d \n", ft_iterative_power(4, 3));
}*/
