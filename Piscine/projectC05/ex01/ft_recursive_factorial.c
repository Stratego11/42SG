/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:33:16 by frtan             #+#    #+#             */
/*   Updated: 2023/08/08 16:39:54 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/*
#include <stdio.h>

int     main(void)
{
        printf("Factorial of -6 = %d\n", ft_recursive_factorial(-6));
        printf("Factorial of 0 = %d\n", ft_recursive_factorial(0));
        printf("Factorial of 1 = %d\n", ft_recursive_factorial(1));
        printf("Factorial of 3 = %d\n", ft_recursive_factorial(3));
}*/
