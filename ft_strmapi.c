/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:49:56 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/24 21:52:13 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	size_t	s_len;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	dst = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!dst)
		return (NULL);
	dst[s_len] = '\0';
	while (s_len)
	{
		s_len--;
		dst[s_len] = f((unsigned int)s_len, s[s_len]);
	}
	return (dst);
}

/* char	f(unsigned int x, char c)
{
	return (c + 10);
}

int	main(void)
{
	char s[10] = "asdg";
	char *dst;
	dst = ft_strmapi(s, f);
	printf("%s", dst);
} */