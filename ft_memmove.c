/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:51:38 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/26 18:37:46 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				x;
	unsigned char		*dst1;
	const unsigned char	*src1;

	x = 0;
	dst1 = (unsigned char *)dst;
	src1 = (const unsigned char *)src;
	if (dst1 == NULL && src1 == NULL)
		return (0);
	if (dst1 > src1)
	{
		while (n-- > 0)
		{
			dst1[n] = src1[n];
		}
	}
	else
	{
		while (n > x)
		{
			dst1[x] = src1[x];
			x++;
		}
	}
	return (dst1);
}
