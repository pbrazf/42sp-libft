/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrferr <pedrferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 23:04:37 by pedrferr          #+#    #+#             */
/*   Updated: 2025/07/28 23:05:32 by pedrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*var;
	size_t	i;
	size_t	var_size;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		var = malloc(1);
		return (var);
	}
	var_size = size * nmemb;
	var = malloc(var_size);
	if (!var)
		return (NULL);
	i = 0;
	while (i < var_size)
	{
		var[i] = 0;
		i++;
	}
	return (var);
}
