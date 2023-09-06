/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 09:17:42 by frtan             #+#    #+#             */
/*   Updated: 2023/08/13 16:51:57 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (0);
	p = (int *)malloc((max - min) * sizeof(int));
	if (p == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (min >= max)
		return (0);
	if (!*range)
		return (-1);
	if (*range == NULL)
		return (0);
	return (max - min);
}
/*
#include <stdio.h>

int	main(void)
{
	int min;
	int max;
	int **range;
	int *range1;

	min = 2;
	max = 10;
	range = &range1;
	range1 = ft_range(min, max);
	printf("Last value: %d ", ft_ultimate_range(range, min, max));
	free(range1);
	return (0);
}*/
