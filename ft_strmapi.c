/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrferr <pedrferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 20:40:51 by pedrferr          #+#    #+#             */
/*   Updated: 2025/08/01 20:40:53 by pedrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	str_len;
	char	*str_return;

	if (!s || !f)
		return (NULL);
	str_len = ft_strlen(s);
	str_return = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!str_return)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str_return[i] = f(i, s[i]);
		i++;
	}
	str_return[i] = '\0';
	return (str_return);
}
