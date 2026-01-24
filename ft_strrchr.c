/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:51:50 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/24 21:57:26 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	x;

	x = ft_strlen(s);
	while (x != 0)
	{
		if (s[x] == (unsigned char)c)
			return ((char *)&s[x]);
		x--;
	}
	if ((unsigned char)c == s[x])
		return ((char *)&s[x]);
	return (NULL);
}

/* int	main(void)
{
	char x1[10] = "abcd";
	printf("%s", ft_strrchr(x1, 'c'));
} */