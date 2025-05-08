/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:43:03 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/24 16:12:31 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// int main() {
//     t_list *list = NULL;
//     t_list *node1 = ft_lstnew("one");
//     t_list *node2 = ft_lstnew("two");
//     t_list *node3 = ft_lstnew("three");

//     ft_lstadd_front(&list, node1);
//     ft_lstadd_front(&list, node2);
//     ft_lstadd_front(&list, node3);

// 	t_list *node = node3;
// 	while(node != NULL)
// 	{
// 		printf("%s", (char *)node->content);
// 		node = node->next;v
// 	}

//     free(node1);
//     free(node2);
//     free(node3);
// }