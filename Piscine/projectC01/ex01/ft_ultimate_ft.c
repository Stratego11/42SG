/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:50:03 by frtan             #+#    #+#             */
/*   Updated: 2023/08/06 17:21:31 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>

int main()
{
	int	n = 0;

	int* ptr1 = &n;
	int** ptr2 = &ptr1;
	int*** ptr3 = &ptr2;
	int****	ptr4 = &ptr3;
	int***** ptr5 = &ptr4;
	int****** ptr6 = &ptr5;
	int******* ptr7 = &ptr6;
	int******** ptr8 = &ptr7;
	int********* ptr9 = &ptr8;
	printf("Before: %d\n", n);
	ft_ultimate_ft(ptr9);
	printf("After: %d\n", n);

	return (0);
}
