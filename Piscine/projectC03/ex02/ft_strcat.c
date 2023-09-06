/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:55:04 by frtan             #+#    #+#             */
/*   Updated: 2023/08/05 15:04:23 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	stringlen(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		i++;
	}
	if (str[0] == '\0')
	{
		i = 0;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	dest_len;
	unsigned int	j;

	j = 0;
	dest_len = stringlen(dest);
	while (src[j] != '\0')
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	if (dest[0] == '\0')
	{
		return (src);
	}
	else
	{	
		return (dest);
	}
}

/*
#include <stdio.h>

int main()
{
	char dest[] = "hello";
	char src[] = "world";

	printf("Original dest: %s\n", dest);
	printf("Original string length: %i\n", stringlen(dest));

	ft_strcat(dest, src);

	printf("After concat dest: %s\n", dest);
	printf("After concat  string length: %i\n", stringlen(dest));
	
}*/
