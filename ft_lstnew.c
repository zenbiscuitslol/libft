/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:32:48 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/24 16:04:47 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
// int	main(void)
// {
// 	t_list *lst = NULL;
// 	t_list *node1 = ft_lstnew(("hello"));
// 	t_list *node2 = ft_lstnew(("world"));

// 	ft_lstadd_back(&lst, node1);
//  	ft_lstadd_back(&lst, node2);

// 	t_list *node = lst;

// 	while (node != NULL)
// 	{
// 		printf("%s", (char *)node->content);
// 		node = node->next;
// 	}
// }