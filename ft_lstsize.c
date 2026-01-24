/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:45:52 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/24 21:01:14 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	x;

	if (lst == NULL)
		return (0);
	x = 0;
	while (lst != NULL)
	{
		x++;
		lst = lst->next;
	}
	return (x);
}

int	main(void)
{
	t_list *node1 = (t_list *)malloc(sizeof(t_list));
	node1->content = "asd";
	node1->next = NULL;

	printf("%d \n", ft_lstsize(node1));
}