/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:49:21 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/20 16:53:55 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	ptr_size;
	char	*ptr;

	i = 0;
	ptr_size = count * size;
	ptr = malloc(ptr_size);
	if (ptr == NULL)
		return (NULL);
	else
	{
		while (i < ptr_size)
		{
			ptr[i] = '\0';
			i++;
		}
		return (ptr);
	}
}
// int	main(void)
// {
// 	int	*str;
// 	int	i;

// 	i=0;
// 	str = ft_calloc(5, sizeof(int));
// 	if (str == NULL)
// 		printf("%s", "didnt allocate memory.");
// 	while (i < 5)
// 	{
// 		printf("%d", str[i]);
// 		i++;
// 	}
// 	free(str);
// }
