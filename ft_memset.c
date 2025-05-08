/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:50:50 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/17 15:39:40 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr1;

	i = 0;
	ptr1 = (unsigned char *)b;
	while (i < len)
	{
		*ptr1 = (unsigned char)c;
		ptr1++;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char str[]="hello";
// 	ft_memset(str, '0', 5);
// 	printf("%s", str);
// }