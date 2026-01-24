/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:33:58 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/24 21:01:24 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

int	main(void)
{
	char s[] = "asdasda";

	ft_putstr_fd(s, 1);
	printf("\n");
}