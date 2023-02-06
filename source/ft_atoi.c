/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataskin <ataskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 05:14:48 by ataskin           #+#    #+#             */
/*   Updated: 2023/01/23 05:15:22 by ataskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	number;
	int			isaret;

	isaret = 1;
	number = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			isaret = -1;
		str++;
	}
	while (*str != 0 && *str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0') * isaret;
		if (number > 2147483647)
			return (-1);
		if (number < -2147483648)
			return (0);
		str++;
	}
	return (number);
}

/*
int main()
{
	char x[] = "  -987AAVA";
	int result;

	result = ft_atoi(x);
	printf("%d", result);
}
*/