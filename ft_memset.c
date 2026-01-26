/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:51:39 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/26 18:37:50 by essimsek         ###   ########.fr       */
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
