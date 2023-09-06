/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 21:18:34 by frtan             #+#    #+#             */
/*   Updated: 2023/08/13 16:12:21 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (0);
	p = (int *) malloc(sizeof(int) * (max - min));
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
/*
#include <stdio.h>

int	main(void)
{	
	int min;
	int max;
	int *values;
	int i = 0;
	int size;

	min = -5;
	max = 15;
	size = max - min;
	values = ft_range(min, max);
	while (i < size)
	{
		printf("%d ", values[i]);
		i++;
	}
	free(values);
	return (0);
}*/
