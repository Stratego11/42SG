/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:32:13 by frtan             #+#    #+#             */
/*   Updated: 2023/08/12 15:12:26 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	n;

	n = 1;
	if (nb <= 0)
		return (0);
	while (n * n <= nb && n < 46342)
	{
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("-3 = %d\n", ft_sqrt(-3));
	printf("0 = %d\n", ft_sqrt(0));
	printf("3 = %d\n", ft_sqrt(3));
	printf("4 = %d\n", ft_sqrt(4));
	printf("2147483647 = %d", ft_sqrt(2147483647));
}*/
