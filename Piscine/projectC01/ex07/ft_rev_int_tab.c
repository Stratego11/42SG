/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:31:51 by frtan             #+#    #+#             */
/*   Updated: 2023/08/02 10:16:46 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i -1] = tmp;
		i++;
	}
}

int main()
{
	int	size = 5;
	int 	array[] = {1, 2, 3, 4, 5};
	int 	i;

	i = 0;
	ft_rev_int_tab(array, size);
	while (i < size)
	{
		printf("%i", array[i]);
		i++;
	}

	return (0);
}
