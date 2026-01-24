/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:07:01 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/23 16:25:36 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst != NULL && new != NULL)
    {    
        new -> next = *lst;
        *lst = new;
    }
}



int main()
{
    t_list *head = NULL;
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    node1 -> content = "asd";
    node1 -> next = NULL;
    
    ft_lstadd_front(&head, node1);

    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    node2 -> content = "kkkk";
    node2 -> next = NULL;

    ft_lstadd_front(&head, node2);

    t_list *temp = head;
    while (temp != NULL)
    {
        printf("%s\n", (char *)temp -> content);
        temp = temp -> next;
    }
    
}


int main2()
{
    t_list *head = NULL;

    t_list *node1 = ft_lstnew("asdaads");
    ft_lstadd_front(&head, node1);
    t_list *temp = head;
    while (temp != NULL)
    {
        printf("%s\n", (char *)temp -> content);
        temp = temp -> next;
    }
}