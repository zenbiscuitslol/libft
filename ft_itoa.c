/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:54:07 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/20 19:21:35 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digits(long int n)
{
	int	digit_count;

	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	digit_count = 0;
	while (n > 0)
	{
		digit_count++;
		n /= 10;
	}
	return (digit_count);
}

static void	add_nums(char *str_out, long int n, int digit_count)
{
	if (n < 0)
		n = -n;
	if (n >= 10)
		add_nums(str_out, n / 10, digit_count - 1);
	str_out[digit_count] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	char		*str_out;
	int			digit_count;
	int			check_minus;
	long int	num;

	num = n;
	check_minus = (num < 0);
	digit_count = get_digits(num);
	str_out = (char *)malloc(digit_count + check_minus + 1);
	if (str_out == NULL)
		return (NULL);
	if (check_minus)
		str_out[0] = '-';
	str_out[digit_count + check_minus] = '\0';
	add_nums(str_out + check_minus, num, digit_count - 1);
	return (str_out);
}

// int	main(void)
// {
// 	int n = 10;
// 	printf("%s", ft_itoa(n));
// }
