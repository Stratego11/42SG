/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 09:30:07 by frtan             #+#    #+#             */
/*   Updated: 2023/08/13 16:08:13 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*join(int size, char **strs, char *sep, char *s)
{
	int					i;
	int					j;
	int					c;

	i = 0;
	j = 0;
	c = 0;
	while (i < size)
	{	
		j = 0;
		while (strs[i][j] != '\0')
			s[c++] = strs[i][j++];
		if (i < size -1)
		{
			j = 0;
			while (sep[j] != '\0')
				s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char				*s;

	if (size == 0)
	{
		s = malloc(1);
		if (s)
			*s = '\0';
		return (s);
	}
	s = malloc(sizeof(strs) + (sizeof(sep) * (size - 1)) + 1);
	if (s == NULL)
		return (0);
	return (join(size, strs, sep, s));
}
/*
#include <stdio.h>

int	main(void)
{
	char *text[10];

	text[0] = "Hello";
	text[1] = "World";
	text[2] = "Test";
	
	char *result = ft_strjoin(3, text, "-");
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}*/
