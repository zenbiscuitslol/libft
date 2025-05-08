/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:21:02 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/17 21:21:20 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str_out;
	int		i;
	int		j;
	int		s1_len;

	i = 0;
	j = 0;
	s1_len = ft_strlen(s1);
	str_out = (char *)malloc(s1_len * sizeof(char) + 1);
	if (str_out == NULL)
		return (NULL);
	while (s1[j])
		str_out[i++] = s1[j++];
	str_out[i] = '\0';
	return (str_out);
}
// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "meow meow meow";
// 	s2 = ft_strdup(s1);
// 	printf("%s", s2);
// }
