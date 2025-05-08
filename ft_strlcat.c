/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:58:49 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/17 20:46:01 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	while (src[j] != '\0')
		j++;
	if (dstsize <= i)
		return (i + j);
	while (i + k < dstsize - 1 && src[k] != '\0')
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	return (i + j);
}
// int main(void)
// {
// 	char str1[9] = "hello";
// 	char *str2 = "world";
// 	printf("%zu",ft_strlcat(str1,str2,12));
// }