/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataskin <ataskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 05:19:35 by ataskin           #+#    #+#             */
/*   Updated: 2023/01/23 05:19:36 by ataskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*last;
	size_t	i;
	size_t	str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len || str_len == 0 || len == 0)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	last = (char *)malloc((len + 1) * sizeof(char));
	if (!last)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		last[i] = s[start + i];
		i++;
	}
	last[i] = '\0';
	return (last);
}
/*
int main()
{
  char ex[] = "blacklivesmatter";
  printf("%s", ft_substr(ex, 2, 6));

  return 0;
}
*/