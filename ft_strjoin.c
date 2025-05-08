/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:57:06 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/20 19:23:03 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_out;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	str_out = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char)
			+ 1);
	if (str_out == NULL)
		return (NULL);
	while (s1[i])
	{
		str_out[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str_out[i + j] = s2[j];
		j++;
	}
	str_out[i + j] = '\0';
	return (str_out);
}
// int main(void)
// {
// 	char *s1 = "hello";
// 	char *s2 = "meow";
// 	printf("%s", ft_strjoin(s1, s2));
// }