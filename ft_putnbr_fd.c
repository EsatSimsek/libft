/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:41:36 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/20 18:06:41 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char c;
    long int ln;
    
    ln = n;
    if (ln < 0)
    {
        write(fd, "-", 1);
        ln *= -1;
    }
    if (ln >= 10)
        ft_putnbr_fd(ln / 10, fd);
    c = (ln % 10) + '0';
    write (fd, &c, 1);
}



int main()
{
    int x = -111;

    ft_putnbr_fd(x, 1);
    printf("\n");
}