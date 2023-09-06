/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:30:54 by frtan             #+#    #+#             */
/*   Updated: 2023/08/05 17:47:42 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}


#include <stdio.h>


int main()
{
	char str1[] = "Hecko";
	char str2[] = "Hell";

	int result = ft_strcmp(str1, str2);
	printf("%d", result);
	if (result == 0)
	{
		printf("Strings are the same");
	}
	else if (result < 0)
	{
		printf("String 1 less than String 2");
	}
	else
	{
		printf("String 2 less than String 1");
	}
}
