/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 08:35:18 by pedrferr          #+#    #+#             */
/*   Updated: 2025/07/25 08:35:22 by pedrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	y;
	size_t	src_size;
	size_t	dst_size;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (dsize <= dst_size)
		return (src_size + dsize);
	i = 0;
	y = dst_size;
	while (y + 1 < dsize && src[i])
		dst[y++] = src[i++];
	dst[y] = '\0';
	return (dst_size + src_size);
}
