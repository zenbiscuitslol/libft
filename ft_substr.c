/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:42:01 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/18 17:28:50 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ret_null_term(char *str_out);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str_out;
	size_t	str_len;
	size_t	i;

	str_len = ft_strlen(s);
	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= str_len)
	{
		str_out = (char *)malloc(1);
		return (ret_null_term(str_out));
	}
	if (len > (str_len - start))
		len = str_len - start;
	str_out = (char *)malloc((len + 1) * sizeof(char));
	if (str_out == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		str_out[i] = s[start + i];
		i++;
	}
	str_out[i] = '\0';
	return (str_out);
}

char	*ret_null_term(char *str_out)
{
	if (str_out == NULL)
		return (NULL);
	str_out[0] = '\0';
	return (str_out);
}

// int	main(void)
// {
// 	char *str = "42 heilbronn";
// 	unsigned int start = 3;
// 	size_t len = 5;
// 	printf("%s", ft_substr(str, start, len));
// }