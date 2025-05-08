/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:19:39 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/24 16:11:55 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

// void	del(void *content)
// {
// 	free (content);
// }

// int main()
// {
// 	t_list *lst = NULL;
// 	char *str1 = ft_strdup("1");
// 	char *str2 = ft_strdup("2");

// 	t_list *node1 = ft_lstnew(str1);
// 	t_list *node2 = ft_lstnew(str2);

// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_back(&lst, node2);

// 	t_list *node = lst;

// 	while (node != NULL)
// 	{
// 		printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}
// 	node1->next = NULL;
// 	ft_lstdelone(node2, del);
// 	node = lst;
// 	while (node != NULL)
// 	{
// 		printf("%s", (char *)node->content);
// 		node = node->next;
// 	}
// 	while (lst != NULL)
// 	{
// 		t_list *next = lst->next;
// 		ft_lstdelone(lst, del);
// 		lst = next;
// 	}
// }
