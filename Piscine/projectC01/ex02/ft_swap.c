/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:03:50 by frtan             #+#    #+#             */
/*   Updated: 2023/07/31 14:59:49 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 10;
	num2 = 30;
	printf("Pre-swap: num1 = %d, num2 = %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("Post-swap: num1 = %d, num2 = %d\n", num1, num2);
	return (0);
}*/
