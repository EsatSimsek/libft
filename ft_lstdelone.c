/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essimsek <essimsek@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:40:02 by essimsek          #+#    #+#             */
/*   Updated: 2026/01/25 00:25:16 by essimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/* void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node;

	node = ft_lstnew(strdup("Silinecek Dugum"));

	printf("Dugum olusturuldu. Icerik: %s\n", (char *)node->content);

	ft_lstdelone(node, del_content);

	printf("Dugum basariyla silindi.\n");

} */