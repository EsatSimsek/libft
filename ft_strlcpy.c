/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:51:45 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/26 18:38:44 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_size;
	size_t	x;

	x = 0;
	src_size = ft_strlen(src);
	if (dstsize > 0)
	{
		while ((src[x] != '\0') && (dstsize - 1 > x))
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = '\0';
	}
	return (src_size);
}
