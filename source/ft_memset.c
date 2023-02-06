/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataskin <ataskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 05:17:34 by ataskin           #+#    #+#             */
/*   Updated: 2023/01/23 05:17:35 by ataskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int letter, size_t n)
{
	char	*ptr;
	size_t	index;

	ptr = (char *)str;
	index = 0;
	while (index < n)
	{
		ptr[index] = letter;
		index++;
	}
	return (ptr);
}

/*
int main()

{
    char dizi[] = "blablabla";
    printf("%s", ft_memset(dizi, 'o', 6));
    return (0);
}
*/