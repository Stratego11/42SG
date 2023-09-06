/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:24:08 by frtan             #+#    #+#             */
/*   Updated: 2023/08/02 10:36:00 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size > 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i+1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}

int	main(void)
{
	int	size = 7;
	int	array[] = {1, 4, 3, 2, 9, 6, 7};
	int	i;

	i = 0;
	ft_sort_int_tab(array, size);
	while (i < size)
	{
		printf("%i ", array[i]);
		i++;
	}
	return (0);
}
