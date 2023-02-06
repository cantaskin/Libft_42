/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataskin <ataskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 05:16:49 by ataskin           #+#    #+#             */
/*   Updated: 2023/01/23 05:16:50 by ataskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t len)
{
	unsigned char	*emptr;
	unsigned char	nc;

	emptr = (unsigned char *)ptr;
	nc = (unsigned char)c;
	while (len > 0)
	{
		if (*emptr == nc)
			return (emptr);
		emptr++;
		len--;
	}
	return (NULL);
}

/*
int main()
{
	char oguz[] = "yalansa dogru de";
	
	printf("%p", ft_memchr(oguz, 'd', 16));
}
*/
