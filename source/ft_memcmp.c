/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataskin <ataskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 05:17:18 by ataskin           #+#    #+#             */
/*   Updated: 2023/01/23 05:17:19 by ataskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*string_s1;
	const unsigned char		*string_s2;
	size_t					i;

	i = 0;
	string_s1 = (const unsigned char *)s1;
	string_s2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (string_s1[i] != string_s2[i])
			return (string_s1[i] - string_s2[i]);
		i++;
	}
	return (0);
}
