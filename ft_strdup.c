/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 08:35:08 by pedrferr          #+#    #+#             */
/*   Updated: 2025/07/28 17:39:19 by pedrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	str_size;
	size_t	i;

	str_size = ft_strlen(s);
	dst = malloc((sizeof(char) * str_size) + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (i < str_size)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
