/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:54:33 by frtan             #+#    #+#             */
/*   Updated: 2023/08/12 11:24:02 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	else
	{
		i = nb - 1;
		while (i > 1)
		{
			if (nb % i == 0)
				return (0);
			i--;
		}
		return (1);
	}
}
/*
#include <stdio.h>
int	main()
{
	printf("-1 = %d\n", ft_is_prime(-1));
	printf("0 = %d\n", ft_is_prime(0));
	printf("2 = %d\n", ft_is_prime(2));
	printf("6 = %d\n", ft_is_prime(6));
	printf("7 = %d\n", ft_is_prime(7));
}*/
