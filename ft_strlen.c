/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:35:04 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/10 17:14:19 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *string)
{
	unsigned int	count;

	count = 0;
	while (string[count] != 0)
	{
		count++;
	}
	return (count);
}

// int	main(void)
// {
// 	printf("%zu", ft_strlen("hello"));
// }