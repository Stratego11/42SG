/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:40:07 by frtan             #+#    #+#             */
/*   Updated: 2023/07/31 15:08:58 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	remainder;

	remainder = *a % *b;
	*a = *a / *b;
	*b = remainder;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("The result of the division = %d\n", a);
	printf("The remainder of the division = %d\n", b);
}*/
