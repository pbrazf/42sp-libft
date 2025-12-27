/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 10:19:26 by pedrferr          #+#    #+#             */
/*   Updated: 2025/07/25 10:19:36 by pedrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		y = 0;
		while (big[i + y] && (i + y) < len && big[i + y] == little[y])
		{
			if (little[y + 1] == '\0')
				return ((char *)&big[i]);
			y++;
		}
		i++;
	}
	return (NULL);
}
