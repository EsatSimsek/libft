/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:07:01 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/25 00:16:01 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

/* int main()
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
} */