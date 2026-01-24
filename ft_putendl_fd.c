/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:36:23 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/24 21:01:21 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 2);
}

int	main(void)
{
	char s[] = "asdasd";

	ft_putendl_fd(s, 1);
}