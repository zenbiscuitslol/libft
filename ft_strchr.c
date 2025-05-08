/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:27:31 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/20 16:37:06 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	x;
	int		i;

	i = 0;
	x = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == x)
			return ((char *)(s + i));
		i++;
	}
	if (x == '\0')
		return ((char *)(s + i));
	return (NULL);
}
// int	main(void)
// {
// 	char *string = "Helloo World";
// 	char *substr = ft_strchr(string, 'q');
// 	printf("%s", substr);
// }