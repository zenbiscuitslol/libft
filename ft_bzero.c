/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:07:54 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/13 19:36:42 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr1;

	ptr1 = s;
	while (n > 0)
	{
		*ptr1 = '\0';
		ptr1++;
		n--;
	}
}

// int main(void){
// 	char str[] = "42 heilbronn";
// 	ft_bzero(str,6);
// 	printf("%s",str);
// 	return(0);
// }