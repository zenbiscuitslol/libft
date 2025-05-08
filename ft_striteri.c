/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:33:27 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/20 19:49:56 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// int	ft_toupper(int c)
// {
// 	if (c >= 'a' && c <= 'z')
// 	{
// 		c = c - 32;
// 	}
// 	return (c);
// }

// void	apply_toupper(unsigned int index, char *c)
// {
// 	(void)index;
// 	*c = ft_toupper(*c);
// }

// int	main(void)
// {
// 	char	str[] = "hello world";

// 	ft_striteri(str, apply_toupper);
// 	printf("%s\n", str); 
// }
