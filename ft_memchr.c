/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:51:34 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/25 00:45:57 by essimsek         ###   ########.fr       */
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

/* int main()
{
    char k[10] = "abc";
    char *k1 = ft_memchr(k, 'b', 4);
    printf("%s\n", k1);
} */
