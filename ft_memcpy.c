/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:51:37 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/24 21:41:11 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				x;
	unsigned char		*dst1;
	const unsigned char	*src1;

	x = 0;
	dst1 = (unsigned char *)dst;
	src1 = (const unsigned char *)src;
	if (dst1 == NULL && src1 == NULL)
		return (NULL);
	while (n > x)
	{
		dst1[x] = src1[x];
		x++;
	}
	return (dst1);
}
