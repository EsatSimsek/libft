/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 18:10:29 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/24 21:01:09 by essimsek         ###   ########.fr       */
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

void	f(void *content)
{
	*(char *)content = *(char *)content - 32;
}
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*temp;

	head = malloc(sizeof(t_list));
	head->content = strdup("a");
	head->next = malloc(sizeof(t_list));
	head->next->content = strdup("b");
	head->next->next = malloc(sizeof(t_list));
	head->next->next->content = strdup("c");
	head->next->next->next = NULL;
	ft_lstiter(head, f);
	temp = head;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
}
