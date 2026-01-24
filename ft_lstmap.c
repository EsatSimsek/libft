/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:33:19 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/24 18:38:28 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_lst;
    t_list *new_node;
    void *new_content;

    if (lst == NULL || f == NULL || del == NULL)
        return (NULL);
    new_lst = NULL;
    while (lst != NULL)
    {
        new_content = f(lst -> content);
        new_node = ft_lstnew(new_content);
        if (new_node == NULL)
        {
            del(new_content);
            ft_lstclear(&new_lst, del);
            return (NULL);
        }
        ft_lstadd_back(&new_lst, new_node);
        lst = lst -> next;
    }
    return (new_lst);
}



void del(void *content)
{
    free(content);
}


void *to_upper(void *content)
{
    char *c = (char *)content; 
    char *new_c = malloc(sizeof(char)); 
    
    if (!new_c)
        return (NULL);
    
    *new_c = *c - 32; 
    return (new_c);
}
#include <stdio.h>
int main()
{
    char c1 = 'a';
	char c2 = 'b';
	char c3 = 'c';

	t_list *list = ft_lstnew(&c1);
	ft_lstadd_back(&list, ft_lstnew(&c2));
	ft_lstadd_back(&list, ft_lstnew(&c3));
    t_list *tmp = list;
    
    t_list *map_list = ft_lstmap(list, to_upper, del);
    
    tmp = map_list;
    while (tmp)
    {
        printf("%c -> ", *(char *)tmp->content);
        tmp = tmp->next;
    }
    
}
