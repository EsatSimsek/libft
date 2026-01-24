/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 17:05:32 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/24 21:01:06 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		temp = *lst;
		temp = temp->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

void	del(void *content)
{
	free(content);
}

#include <stdio.h>

int	main(void)
{
	t_list *head;

	head = malloc(sizeof(t_list));
	head->content = strdup("dsa");
	head->next = malloc(sizeof(t_list));
	head->next->content = strdup("gfdgf");
	head->next->next = malloc(sizeof(t_list));
	head->next->next->content = strdup("ghkj");
	head->next->next->next = NULL;

	printf("%p\n", head);

	ft_lstclear(&head, del);

	printf("%p\n", head);
}