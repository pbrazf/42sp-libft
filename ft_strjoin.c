/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:08:04 by pedrferr          #+#    #+#             */
/*   Updated: 2025/08/02 17:08:06 by pedrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	aux_strcopy(char *dst, const char *src, size_t *index)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dst[*index] = src[i];
		i++;
		(*index)++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	str_len;
	size_t	y;
	char	*join_str;

	str_len = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	join_str = (char *)malloc(sizeof(char) * str_len);
	if (!join_str)
		return (NULL);
	y = 0;
	aux_strcopy(join_str, s1, &y);
	aux_strcopy(join_str, s2, &y);
	join_str[y] = '\0';
	return (join_str);
}
