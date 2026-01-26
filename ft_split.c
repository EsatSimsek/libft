/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 22:24:37 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/26 18:38:14 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	x;
	int	word_count;

	x = 0;
	word_count = 0;
	while (s[x])
	{
		if (s[x] != c)
		{
			if (x == 0 || s[x - 1] == c)
				word_count++;
		}
		x++;
	}
	return (word_count);
}

static size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	return (len);
}

static char	**free_all(char **dst, int i)
{
	while (i > 0)
	{
		i--;
		free(dst[i]);
	}
	free(dst);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**dst;
	int		x;
	size_t	len;

	if (!s)
		return (NULL);
	word_count = count_word(s, c);
	dst = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!dst)
		return (NULL);
	x = 0;
	while (x < word_count)
	{
		while (*s && *s == c)
			s++;
		len = word_len(s, c);
		dst[x] = ft_substr(s, 0, len);
		if (!dst[x])
			return (free_all(dst, x));
		s += len;
		x++;
	}
	dst[x] = NULL;
	return (dst);
}
