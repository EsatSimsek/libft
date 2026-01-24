/* **************************************************************************** */
/*                                                                              */
/*                                                          :::      ::::::::   */
/*   ft_isalpha.c                                         :+:      :+:    :+:   */
/*                                                      +:+ +:+        
	+:+     */
/*   By: essimsek <essimsek@student.42istanbul.com    +#+  +:+      
	+#+        */
/*                                                  +#+#+#+#+#+  
	+#+           */
/*   Created: 2026/01/14 11:03:45 by essimsek            #+#    #+#             */
/*   Updated: 2026/01/14 11:03:45 by essimsek           ###   ########.tr       */
/*                                                                              */
/* **************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalpha('1'));
}