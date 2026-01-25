/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:27:05 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/26 00:39:57 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* #include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	ft_putchar_fd('c', 1);
	printf("\n");
	int dosya_fd;
	dosya_fd = open("dosya.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
	ft_putchar_fd('a', dosya_fd);
} */
