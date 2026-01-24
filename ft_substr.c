/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:02:56 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/25 00:55:37 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	real_len;
	size_t	s_len;
	char	*dst;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		dst = (char *)malloc(sizeof(char) * 1);
		if (!dst)
			return (NULL);
		dst[0] = '\0';
		return (dst);
	}
	real_len = s_len - start;
	if (real_len > len)
		real_len = len;
	dst = (char *)malloc(sizeof(char) * (real_len + 1));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s + start, real_len + 1);
	return (dst);
}

/* int main(void)
{
    char *s;
	s = ft_substr("42Istanbul", 2, 8);

    if (s)
    {
        printf("%s\n", s);
        free(s);
    }
    return (0);
} */