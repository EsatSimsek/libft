/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:51:44 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/17 15:48:34 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t x;
    size_t src_size;
    size_t dest_size;
    
    x = 0;
    src_size = ft_strlen(src);
    dest_size = ft_strlen(dest);
    if (size <= dest_size)
    {
        return (src_size + size);
    }
    while (src[x] != '\0' && (size - 1) > (dest_size + x))
    {
        dest[dest_size + x] = src[x];
        x++;
    }
    dest[dest_size + x] = '\0';
    return (dest_size + src_size);
}




int main()
{
    char x1[10] = "abc";
    char x2[] = "abc";
    printf("%zu",ft_strlcat(x1,x2,10));
    printf("%s" , x1);
}