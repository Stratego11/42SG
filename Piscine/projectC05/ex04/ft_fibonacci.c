/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:09:02 by frtan             #+#    #+#             */
/*   Updated: 2023/08/09 11:21:40 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}
/*
# include <stdio.h>

int	main(void)
{
	printf("-5 = %d\n", ft_fibonacci(-5));
	printf("0 = %d\n", ft_fibonacci(0));
	printf("1 = %d\n", ft_fibonacci(1));
	printf("3 = %d\n", ft_fibonacci(3));
	printf("5 = %d", ft_fibonacci(5));
}*/
