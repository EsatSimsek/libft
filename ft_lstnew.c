/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:57:28 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/21 18:23:18 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *root;
    
    root = (t_list *)malloc(sizeof(t_list));
    if (!root)
        return (NULL);
    root -> content = content;
    root ->  next = NULL;
    return (root);
}


int main()
{
    char *x = "asdasda";
    t_list *node = ft_lstnew(x);
    
    if (node != NULL)
    {
        printf("%s\n" , (char *)node -> content);
        
        if (node -> next == NULL)
            printf("next bos\n");
        free(node);
    }
    
}