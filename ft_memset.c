/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:51:39 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/24 21:01:19 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			x;
	unsigned char	*b1;

	x = 0;
	b1 = (unsigned char *)b;
	while (x < len)
	{
		b1[x] = (unsigned char)c;
		x++;
	}
	return (b1);
}

int	main(void)
{
	char k[10] = "abc";
	ft_memset(k, 'b', 3);
	printf("%s\n", k);

	int k2[] = {0};
	ft_memset(k2, -5, 1);
	printf("%d\n", k2[0]);
}