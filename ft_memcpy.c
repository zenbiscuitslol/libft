/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:13:55 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/17 15:41:45 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*destination;
	char	*source;
	size_t	i;

	destination = (char *)dst;
	source = (char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dst);
}
// int main(void){
// 	char str[]="hello world";
// 	char dest[12];
// 	ft_memcpy(dest,str+5,6);
// 	printf("%s",dest);
// }