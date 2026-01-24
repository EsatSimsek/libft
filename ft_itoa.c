/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:51:04 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/25 00:14:35 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_len(long int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*s;
	long int	ln;

	ln = n;
	len = find_len(ln);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	if (ln < 0)
	{
		ln = ln * -1;
		s[0] = '-';
	}
	s[len] = '\0';
	if (ln == 0)
		s[0] = '0';
	while (ln > 0)
	{
		len--;
		s[len] = (ln % 10) + '0';
		ln = ln / 10;
	}
	return (s);
}

/* int main()
{
	char *s;
	s = ft_itoa(12312);
	printf("%s" , s);
} */