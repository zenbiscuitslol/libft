/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:01:23 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/20 16:36:52 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*last_occ;
	int				i;
	unsigned char	x;

	x = (unsigned int)c;
	last_occ = NULL;
	i = 0;
	if (x == '\0')
		return ((char *)s + ft_strlen(s));
	while (s[i] != '\0')
	{
		if (s[i] == x)
			last_occ = &s[i];
		i++;
	}
	return ((char *)last_occ);
}
// int	main(void)                                      
// {
// 	char *string = "Hell,o,o ,World";
// 	char *substr = ft_strrchr(string, '1');
// 	printf("%s", substr);
// }