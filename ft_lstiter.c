/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 18:10:29 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/25 00:31:16 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* void f(void *content)
{
    *(char *)content = *(char *)content - 32;
}

int main()
{
	t_list	*head;

	head = NULL;
                    // free edebilmek için strdup
	head = ft_lstnew(strdup("a"));
	ft_lstadd_back(&head, ft_lstnew(strdup("b")));
	ft_lstadd_back(&head, ft_lstnew(strdup("c")));

	t_list *temp = head;
	while (temp)
	{
		printf("Icerik: %s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstiter(head, f);
	t_list *temp2 = head;
	while (temp2)
	{
		printf("Icerik: %s\n", (char *)temp2->content);
		temp2 = temp2->next;
	}
} */