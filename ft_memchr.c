/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrferr <pedrferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:43:21 by pedrferr          #+#    #+#             */
/*   Updated: 2025/07/30 11:43:24 by pedrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned char		charac;
	size_t				i;

	src = s;
	charac = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == charac)
		{
			return ((void *)src + i);
		}
		i++;
	}
	return (NULL);
}
