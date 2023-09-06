/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:42:55 by frtan             #+#    #+#             */
/*   Updated: 2023/08/05 15:07:44 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest [i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int main ()
{
	char dest[16] = "Hello";
	char src[] = "world";

	printf("Original dest: %s\n", dest);
	ft_strncat(dest, src, 3);
	printf("Modified dest: %s", dest);
	return (0);
}*/
