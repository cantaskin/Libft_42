/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataskin <ataskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 05:17:40 by ataskin           #+#    #+#             */
/*   Updated: 2023/01/23 05:20:47 by ataskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char a, int fd)
{
	write(fd, &a, 1);
}

/*
int main()
{
    int fd;

    fd = open("deneme", O_RDWR);
    ft_putchar_fd('m', fd);    
}
*/