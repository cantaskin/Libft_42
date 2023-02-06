/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataskin <ataskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 05:15:03 by ataskin           #+#    #+#             */
/*   Updated: 2023/01/23 05:15:32 by ataskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*
#include <stdio.h>
int main()
{
    int x,y,z;
    x = 'a';
    y = '9';
    z = '+';

    printf("%d", isalnum(x));
    printf("%d", isalnum(y));
    printf("%d", isalnum(z));
}
*/