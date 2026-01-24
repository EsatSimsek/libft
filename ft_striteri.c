/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 21:36:26 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/24 23:45:32 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	x;

	x = 0;
	if (!s || !f)
		return ;
	while (s[x] != '\0')
	{
		f(x, s + x);
		x++;
	}
}

/* void	f(unsigned int i, char *c)
{
	if (i % 2 == 0)
	{
		if (*c >= 'a' && *c <= 'z')
			*c = *c - 32;
	}
}

int	main(void)
{
	char	str[] = "dsaasd dasdas asda";

	ft_striteri(str, f);
	printf("%s\n", str);
	return (0);
} */
