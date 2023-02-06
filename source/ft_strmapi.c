/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataskin <ataskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 05:18:53 by ataskin           #+#    #+#             */
/*   Updated: 2023/01/23 05:18:54 by ataskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s)
		return (0);
	str = (char *)malloc (ft_strlen(s) + 1);
	if (!str)
		return (0);
	i = 0;
	while (i < ft_strlen(s))
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char upper(unsigned int i, char s)
{
  char x;
  x = s - 32;
  return (x);
}

int main() 
{
  char bilal[] = "bilal";
  printf("%s", ft_strmapi(bilal, upper));
  printf("%s", bilal);
  return (0);
}
*/