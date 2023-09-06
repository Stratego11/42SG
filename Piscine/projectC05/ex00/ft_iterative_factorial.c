/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:33:16 by frtan             #+#    #+#             */
/*   Updated: 2023/08/12 15:10:32 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>

int     main(void)
{
        printf("Factorial of -6 = %d\n", ft_iterative_factorial(-6));
        printf("Factorial of 0 = %d\n", ft_iterative_factorial(0));
        printf("Factorial of 1 = %d\n", ft_iterative_factorial(1));
        printf("Factorial of 3 = %d\n", ft_iterative_factorial(3));
}*/
