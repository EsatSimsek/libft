/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:51:34 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/24 21:40:37 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				x;
	const unsigned char	*str;

	str = (const unsigned char *)s;
	x = 0;
	while (x < n)
	{
		if (str[x] == (unsigned char)c)
		{
			return ((void *)&str[x]);
		}
		x++;
	}
	return (NULL);
}
