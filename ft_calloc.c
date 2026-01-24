/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 00:18:02 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/24 21:22:13 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	p = malloc((size) * (nmemb));
	if (p == NULL)
		return (NULL);
	ft_bzero(p, (nmemb * size));
	return (p);
}
