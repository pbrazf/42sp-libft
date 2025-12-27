/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 22:33:46 by pedrferr          #+#    #+#             */
/*   Updated: 2025/08/05 22:33:47 by pedrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *str, char delimiter)
{
	int		in_word;
	size_t	count;

	in_word = 0;
	count = 0;
	while (*str)
	{
		if (*str != delimiter && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == delimiter)
			in_word = 0;
		str++;
	}
	return (count);
}

static char	*get_word_start(char const *str, char delimiter)
{
	while (*str && *str == delimiter)
		str++;
	if (*str && *str != delimiter)
		return ((char *)str);
	return (NULL);
}

static char	*get_word_end(char const *str, char delimiter)
{
	while (*str && *str != delimiter)
		str++;
	return ((char *)str);
}

static char	*copy_word(char *start, char *end, char **words, size_t max)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = 0;
	if (!start || !end)
		return (NULL);
	while ((start[len]) && (start + len != end))
		len++;
	word = malloc(len + 1);
	if (!word)
	{
		i = 0;
		while (i < max)
			free(words[i++]);
		free(words);
		return (NULL);
	}
	ft_strlcpy(word, start, len + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	total;
	char	*start;
	char	*end;
	char	**result;

	if (!s)
		return (NULL);
	total = count_words(s, c);
	result = malloc((total + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s && i < total)
	{
		start = get_word_start(s, c);
		end = get_word_end(start, c);
		result[i] = copy_word(start, end, result, i);
		if (!result[i++])
			return (NULL);
		s = end;
	}
	result[total] = NULL;
	return (result);
}
