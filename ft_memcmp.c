/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:35:19 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/12 20:10:25 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	compare;
	char	*str1;
	char	*str2;

	compare = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	if (n == 0)
		return (0);
	while (compare < n)
	{
		if (str1[compare] != str2[compare])
			return ((unsigned char)str1[compare]
				- (unsigned char)str2[compare]);
		compare++;
	}
	return (0);
}
// int	main(void)
// {
// 	char *str1 = "abcd\0gh";
// 	char *str2 = "baddaa";
// 	printf("%d",ft_memcmp(str1, str2, 8));
// }