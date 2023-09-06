/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 10:38:36 by frtan             #+#    #+#             */
/*   Updated: 2023/08/07 17:46:16 by frtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	number;

	sign = 1;
	number = 0;
	while (*str)
	{
		if (*str == '-')
			sign *= -1;
		else if ((*str >= '\t' && *str <= '\r') || *str == ' ')
			str++;
		else if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			break ;
		else if (*str >= '0' && *str <= '9')
		{
			while (*str >= '0' && *str <= '9')
			{	
				number = 10 * number + *str - '0';
				str++;
			}
			break ;
		}
		str++;
	}
	return (sign * number);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi("   ---+--2147--+1ab567"));
	printf("%d", ft_atoi("   abc---+---2147--+1ab567"));
}
