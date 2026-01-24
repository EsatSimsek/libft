/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 17:05:46 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/25 00:33:07 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/* int main()
{
	t_list *node1;
	node1 = (t_list *)malloc(sizeof(t_list));
    node1 -> content = 111;
    node1 -> next = NULL;

    node1 -> next = ft_lstlast(node1);

    printf("%d \n", node1 -> next -> content);
	
} */