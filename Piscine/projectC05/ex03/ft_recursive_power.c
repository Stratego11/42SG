/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:49:26 by frtan             #+#    #+#             */
/*   Updated: 2023/08/09 11:01:26 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("-2 ^ -1 = %d\n", ft_recursive_power(-2, -1));
	printf("-2 ^ 0 = %d\n", ft_recursive_power(-2, 0));
	printf("0 ^ -1 = %d\n", ft_recursive_power(0, -1));
	printf("0 ^ 0 = %d\n", ft_recursive_power(0, 0));
	printf("0 ^ 2 = %d\n", ft_recursive_power(0, 2));
	printf("3 ^ 3 = %d", ft_recursive_power(3, 3));
}*/
