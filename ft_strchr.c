/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:51:41 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/15 23:22:14 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char* ft_strchr (const char* s, int c)
{
    while (*s != '\0')
    {
        if (*s == (unsigned char)c)
        {
            return ((unsigned char *)s);
        }
        s++;
    }
    if ((unsigned char)c == '\0')
    {
        return ((unsigned char *)s); //char mı unsigned mı?
    }
    return (0);
}




int main()
{
    char str[] = "abc";
    printf("%s\n", ft_strchr(str ,'b'));
}
