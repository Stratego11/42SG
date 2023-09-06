/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:25:37 by frtan             #+#    #+#             */
/*   Updated: 2023/08/13 16:11:33 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	if (src == NULL)
		return (0);
	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest != NULL)
	{
		ft_strcpy(dest, src);
		return (dest);
	}
	else
	{
		return (dest);
	}
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*test;
	char	*dup;
	char	*dup2;

	test = "hello world";
	//test = "";
	printf("%s\n", test);
	dup = ft_strdup(test);
	dup2 = strdup(test);
	if (dup != NULL)
	{
		printf("dup = %s\n", dup);
		printf("dup2 = %s\n", dup2);
		free(dup);
		free(dup2);
	}
	return (0);
}*/
