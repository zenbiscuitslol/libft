/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:54:29 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/24 15:51:20 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
// int main()
// {
// 	t_list *lst = NULL;

// 	t_list *node1 = ft_lstnew(ft_strdup("hello"));
// 	t_list *node2 = ft_lstnew(ft_strdup("world"));
// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_back(&lst, node2);
// 	t_list *last_node = ft_lstlast(lst);
// 	printf("%s\n", (char *)last_node->content);
// }