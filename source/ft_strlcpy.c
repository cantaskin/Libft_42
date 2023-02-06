/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataskin <ataskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 05:18:37 by ataskin           #+#    #+#             */
/*   Updated: 2023/01/23 05:18:38 by ataskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (size > 0)
	{
		while (index < (size - 1) && src[index])
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	while (src[index])
		index++;
	return (index);
}

/*
#include <stdio.h>
int	main ()
{
    char a[] = "Daft";
    char b[] = "Punk";
    int result;

    result = ft_strlcpy(a, b, 4);
    printf("%d", result);

    int i;

    i = 0;
    while(a[i])
    {
        printf("%c", a[i]);
        i++;
    }
    i = 0;
    while(b[i])
    {
        printf("%c", b[i]);
        i++;
    }
}
*/
