/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:18:38 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/23 16:39:34 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *iter;
    
    if (lst == NULL || new == NULL)
        return;
    if (*lst == NULL)
    {
        *lst = new;
        new -> next = NULL; 
    }   
    else 
    {
        iter = *lst;
        while (iter -> next != NULL)
            iter = iter -> next;
        iter -> next = new;
        new -> next = NULL;
    }
}


#include <stdio.h>

int main()
{
    t_list *head = NULL;
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    node1 -> content = "asd";
    node1 -> next = NULL;
    
    ft_lstadd_back(&head, node1);

    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    node2 -> content = "kkkk";
    node2 -> next = NULL;

    ft_lstadd_back(&head, node2);

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
    ft_lstadd_back(&head, node1);
    t_list *temp = head;
    while (temp != NULL)
    {
        printf("%s\n", (char *)temp -> content);
        temp = temp -> next;
    }
}