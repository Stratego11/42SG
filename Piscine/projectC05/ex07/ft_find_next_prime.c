/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:54:33 by frtan             #+#    #+#             */
/*   Updated: 2023/08/12 15:04:35 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i < 46341 && i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	printf("0 = %d\n", ft_find_next_prime(-1));
	printf("2 = %d\n", ft_find_next_prime(2));
	printf("4 = %d\n", ft_find_next_prime(4));
	printf("6 = %d\n", ft_find_next_prime(6));
	printf("7 = %d\n", ft_find_next_prime(7));
	printf("1841439744 = %d\n", ft_find_next_prime(1841439744));
	printf("2147395600 = %d\n", ft_find_next_prime(2147395600));
	printf("2147483641 = %d\n", ft_find_next_prime(2147483641));
	printf("2147483647 = %d\n", ft_find_next_prime(2147483647));
}*/
