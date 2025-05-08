/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprejith <pprejith@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:04:45 by pprejith          #+#    #+#             */
/*   Updated: 2025/03/24 15:03:04 by pprejith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c);
static char	*get_words(char const *s, char c);
static void	free_mem(char **word_array);
static char	**add_words(char const *s, char **word_array, int word_count,
				char c);

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**word_array;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	word_array = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!word_array)
		return (NULL);
	return (add_words(s, word_array, word_count, c));
}

static int	count_words(char const *s, char c)
{
	int	word_count;

	word_count = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
		{
			word_count++;
			while (*s != c && *s != '\0')
				s++;
		}
	}
	return (word_count);
}

static char	*get_words(char const *s, char c)
{
	int		i;
	int		j;
	int		word_len;
	char	*word;

	i = 0;
	j = 0;
	word_len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		word_len++;
		i++;
	}
	word = (char *)malloc((word_len * sizeof(char)) + 1);
	if (!word)
		return (NULL);
	while (j < word_len)
	{
		word[j] = s[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

static void	free_mem(char **word_array)
{
	int	i;

	i = 0;
	while (word_array[i])
	{
		free(word_array[i]);
		i++;
	}
	free(word_array);
}

static char	**add_words(char const *s, char **word_array, int word_count,
		char c)
{
	int	s_counter;
	int	w_array_conter;

	s_counter = 0;
	w_array_conter = 0;
	while (w_array_conter < word_count)
	{
		while (s[s_counter] == c && s[s_counter] != '\0')
			s_counter++;
		word_array[w_array_conter] = get_words(s + s_counter, c);
		if (!word_array[w_array_conter])
		{
			free_mem(word_array);
			return (NULL);
		}
		while (s[s_counter] != c && s[s_counter] != '\0')
			s_counter++;
		w_array_conter++;
	}
	word_array[w_array_conter] = NULL;
	return (word_array);
}

// int main(void) {
//     char const *s;
//     char delimiter;
//     char **result;
//     int i;

//     s = "hello world meow meow";
//     delimiter = ' ';
//     result = ft_split(s, delimiter);
//     printf("Test Case 1: Splitting '%s' by '%c'\n", s, delimiter);
//     i = 0;
//     while (result[i]) {
//         printf("Word %d: %s\n", i + 1, result[i]);
//         free(result[i]);
//         i++;
//     }
//     free(result);
// }
