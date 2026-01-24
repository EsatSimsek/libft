/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:40:02 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/23 17:02:52 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (lst == NULL || del == NULL)
        return;
    del(lst -> content);
    free(lst);
}





void del(void *content)
{
    free(content);
}

int main()
{
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    
    node1->content = strdup("asd"); 
    node1->next = (t_list *)malloc(sizeof(t_list));
    node1->next->content = strdup("kkk"); 
    node1->next->next = NULL;

    ft_lstdelone(node1->next, del);
    node1->next = NULL; 

    t_list *temp = node1; 
    while (temp != NULL)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }
}