/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:56:47 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/24 15:59:39 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*resultultult;
	t_list	*node;
	void	*content;

	resultultult = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&resultultult, del);
			return (NULL);
		}
		ft_lstadd_back(&resultultult, node);
		lst = lst->next;
	}
	return (resultultult);
}
// void	*to_upper(void *content)
// {
// 	char	*str;

// 	str = (char *)content;
// 	while (*str)
// 	{
// 		if (*str >= 'a' && *str <= 'z')
// 			*str -= 32;
// 		str++;
// 	}
// 	return(str);
// }

// void	del(void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	t_list *lst = NULL;
// 	t_list *result	 = NULL;

// 	t_list *node1 = ft_lstnew(ft_strdup("hello"));
// 	t_list *node2 = ft_lstnew(ft_strdup("world"));
// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_back(&lst, node2);
// 	result = ft_lstmap(lst, to_upper, del);
// 	while (result != NULL)
// 	{
// 		printf("%s\n", (char *)result->content);
// 		result = result->next;
// 	}
// }
