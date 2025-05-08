/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:31:00 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/20 15:32:10 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*destination;
	char	*source;

	destination = (char *)dst;
	source = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst == src)
		return (dst);
	if (source < destination && source + len > destination)
	{
		while (len--)
			destination[len] = source[len];
	}
	else
	{
		while (len--)
			*destination++ = *source++;
	}
	return (dst);
}

// int main(void){
// 	char str[]="hello world";
// 	char dest[12];
// 	ft_memmove(dest,str,9);
// 	printf("%s",dest);
// }