/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:51:48 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/24 21:01:37 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
		/////////////////////////////
{
	size_t x;

	x = 0;
	while (x < n)
	{
		if (s1[x] != s2[x])
			return ((unsigned char)s1[x] - (unsigned char)s2[x]);
		if (s1[x] == '\0')
			return (0);
		x++;
	}
	return (0);
}

int	main(void)
{
	char s1[5] = "abc";
	char s2[5] = "abzz";
	printf("%d\n", ft_strncmp(s1, s2, 3));
}