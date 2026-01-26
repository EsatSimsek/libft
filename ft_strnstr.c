/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:51:49 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/26 18:39:00 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (x < len && big[x] != '\0')
	{
		y = 0;
		while (little[y] != '\0' && big[x + y] == little[y] && x + y < len)
		{
			y++;
		}
		if (little[y] == '\0')
			return ((char *)&big[x]);
		x++;
	}
	return (NULL);
}
