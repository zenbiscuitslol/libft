/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:24:59 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/17 21:21:45 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	check;

	check = 0;
	if (n == 0)
		return (0);
	while (s1[check] && s2[check] && check < (n - 1) && s1[check] == s2[check])
		check++;
	return ((unsigned char)s1[check] - (unsigned char)s2[check]);
}

// #include <string.h>
// int	main(void)
// {
// 	char str[] = "abcddd";
// 	char str1[] = "sdsdsd";

// 	printf("%i", ft_strncmp(str, str1, 5));
// 	printf("%i", strncmp(str, str1, 5));
// }