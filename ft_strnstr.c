/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:51:49 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/15 18:53:52 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t x;
    size_t y;

    x = 0;
    if (needle[0] == '\0')
        return ((char *)haystack);
    while (x < len && haystack[x] != '\0')
    {
        y = 0;    
        while (needle[y] != '\0' && haystack[x + y] == needle[y] && x + y < len)
        {   
            y++;
        }
        if (needle[y] == '\0')
            return ((char *)&haystack[x]);
        x++;
    }
    return(NULL);
}

int main()
{
    char a[10] = "abcde";
    char b[3] ="z";

    char *sonuc = ft_strnstr(a, b, 10);
    if (sonuc == NULL)
        printf("Bulunamadi (NULL)\n");
    else
        printf("%s\n", sonuc);
}