/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 17:05:32 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/25 00:21:25 by essimsek         ###   ########.fr       */
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

/* void del(void *content)
{
    free(content);
}

#include <stdio.h>
int	main(void)
{
	t_list	*head;

	head = NULL;
                    // free edebilmek için strdup
	head = ft_lstnew(strdup("Dugum 1"));
	ft_lstadd_back(&head, ft_lstnew(strdup("Dugum 2")));
	ft_lstadd_back(&head, ft_lstnew(strdup("Dugum 3")));

	t_list *temp = head;
	while (temp)
	{
		printf("Icerik: %s\n", (char *)temp->content);
		temp = temp->next;
	}

	ft_lstclear(&head, del_content);

	if (head == NULL)
		printf("\nBasarili: Liste tamamen temizlendi ve head NULL yapildi.\n");
	else
		printf("\nHata: head hala NULL degil!\n");

} */