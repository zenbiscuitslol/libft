/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 20:44:39 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/24 15:16:33 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set);
static char	*handle_trim(char *str_out, char const *s1, int i, int len);

// char	*ft_strdup(const char *s1)
// {
// 	char	*str_out;
// 	int		i;
// 	int		j;
// 	int		s1_len;

// 	i = 0;
// 	j = 0;
// 	s1_len = ft_strlen(s1);
// 	str_out = (char *)malloc(s1_len * sizeof(char) + 1);
// 	if (str_out == NULL)
// 		return (NULL);
// 	while (s1[j])
// 		str_out[i++] = s1[j++];
// 	str_out[i] = '\0';
// 	return (str_out);
// }

// size_t	ft_strlen(const char *string)
// {
// 	unsigned int	count;

// 	count = 0;
// 	while (string[count] != 0)
// 	{
// 		count++;
// 	}
// 	return (count);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_out;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	if (!s1)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	while (s1[i] && check_set(s1[i], set))
		i++;
	while (len > i && check_set(s1[len - 1], set))
		len--;
	if (i >= len)
	{
		str_out = ((char *)malloc(1));
		if (!str_out)
			return (NULL);
		str_out[0] = '\0';
		return (str_out);
	}
	str_out = (char *)malloc(len - i + 1);
	return (handle_trim(str_out, s1, i, len));
}

static int	check_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*handle_trim(char *str_out, char const *s1, int i, int len)
{
	int	j;

	j = 0;
	if (!str_out)
		return (NULL);
	while (i < len)
		str_out[j++] = s1[i++];
	str_out[j] = '\0';
	return (str_out);
}
// int	main(void)
// {
// 	char const *s1 = "hello world";
// 	char const *set = "hello";
// 	char *result;

// 	result = ft_strtrim(s1, set);
// 	printf("'%s'\n", s1);
// 	printf("'%s'\n", result);
// 	free(result);
// }