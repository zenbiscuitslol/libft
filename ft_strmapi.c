/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:47:09 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/20 20:11:21 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str_out;

	i = 0;
	str_out = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (str_out == NULL)
		return (NULL);
	while (s[i])
	{
		str_out[i] = f(i, s[i]);
		i++;
	}
	str_out[i] = '\0';
	return (str_out);
}

// size_t	ft_strlen(const char *string)
// {
// 	unsigned int	count;

// 	count = 0;
// 	while (string[count] != '\0')
// 	{
// 		count++;
// 	}
// 	return (count);
// }

// int	ft_toupper(int c)
// {
// 	if (c >= 'a' && c <= 'z')
// 	{
// 		c = c - 32;
// 	}
// 	return (c);
// }

// char	apply_toupper(unsigned int index, char c)
// {
// 	(void)index;
// 	return (char)ft_toupper(c);
// }

// int	main(void)
// {
// 	char	*result;

// 	const char str[] = "hello world";
// 	result = ft_strmapi(str, apply_toupper);
// 	if (result != NULL)
// 	{
// 		printf("Modified: %s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// }
