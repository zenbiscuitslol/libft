/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:51:20 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/24 16:09:37 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
// int	main(void)
// {
// 	t_list *lst = NULL;
// 	t_list *node1 = ft_lstnew(("hello"));
// 	t_list *node2 = ft_lstnew(("world"));
// 	t_list *node3 = ft_lstnew(("one"));
// 	t_list *node4 = ft_lstnew(("threee"));
// 	t_list *node5 = ft_lstnew(("four"));

// 	ft_lstadd_back(&lst, node1);
//  	ft_lstadd_back(&lst, node2);
// 	ft_lstadd_back(&lst, node3);
//  	ft_lstadd_back(&lst, node4);
// 	ft_lstadd_back(&lst, node5);

// 	printf("%d",ft_lstsize(lst));
// }