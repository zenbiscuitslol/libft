/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:43:10 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/24 15:48:43 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*node;

	node = lst;
	if (!lst)
		return ;
	while (node)
	{
		f(node->content);
		node = node->next;
	}
}
// void	to_upper(void *content)
// {
// 	char	*str;

// 	str = (char *)content;
// 	while (*str)
// 	{
// 		if (*str >= 'a' && *str <= 'z')
// 			*str -= 32;
// 		str++;
// 	}
// }

// int main()
// {
// 	t_list *lst = NULL;

// 	t_list *node1 = ft_lstnew(ft_strdup("hello"));
// 	t_list *node2 = ft_lstnew(ft_strdup("world"));
// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_back(&lst, node2);
// 	t_list *node = lst;
// 	ft_lstiter(lst, to_upper);

// 	while(node != NULL)
// 	{
// 		printf("%s", (char *)node->content);
// 		node = node->next;
// 	}
// }
