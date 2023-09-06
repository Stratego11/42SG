/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:37:12 by frtan             #+#    #+#             */
/*   Updated: 2023/07/31 15:04:41 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	a = 10;	
	int	b = 3;
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);
	
	if (b != 0)
	{
		printf("Values of a = %d and b = %d\n", a, b);
		printf("Quotient = %d\n", div);
		printf("Remainder = %d", mod);
	}

	return (0);
}*/
