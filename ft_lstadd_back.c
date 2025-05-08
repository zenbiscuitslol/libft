/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:07:10 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/24 16:12:16 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (new == NULL || lst == NULL)
		return ;
	last_node = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new;
}

// int main() {
//     t_list *list = NULL;
//     t_list *node1 = ft_lstnew("one");
//     t_list *node2 = ft_lstnew("two");
//     t_list *node3 = ft_lstnew("three");

//     ft_lstadd_back(&list, node1);
//     ft_lstadd_back(&list, node2);
//     ft_lstadd_back(&list, node3);

//     printf("Linked list after adding nodes:\n");
// 	t_list *node = node1;
// 	while(node != NULL)
// 	{
// 		printf("%s", (char *)node->content);
// 		node = node->next;
// 	}

//     free(node1);
//     free(node2);
//     free(node3);
// }