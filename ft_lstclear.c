/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:33:25 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/24 15:35:44 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}

// void	del(void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	t_list *lst = NULL;
// 	char *str = ft_strdup("one");
// 	char *str1 = ft_strdup("two");
// 	t_list *node1 = ft_lstnew(str);
// 	t_list *node2 = ft_lstnew(str1);
// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_back(&lst, node2);
// 	ft_lstclear(&lst, del);
// 	if (lst == NULL)
// 		printf ("list cleared \n");
// 	else
// 		printf("list not cleared \n");
// }