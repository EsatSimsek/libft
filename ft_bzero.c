/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:51:23 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/25 00:10:25 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			x;
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		s1[x] = 0;
		x++;
	}
}

/* int main()
{
    char k[19] = "abcd";
    ft_bzero(k, 19);
    printf("%s\n", k);
} */