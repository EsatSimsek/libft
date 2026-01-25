/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:18:38 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/25 14:24:46 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*iter;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	else
	{
		iter = *lst;
		while (iter->next != NULL)
			iter = iter->next;
		iter->next = new;
	}
}

/* int main()
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
} */