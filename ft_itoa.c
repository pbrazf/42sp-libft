/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 20:55:50 by pedrferr          #+#    #+#             */
/*   Updated: 2025/08/05 20:55:52 by pedrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	aux_numlen(long num)
{
	size_t	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	int		is_negative;
	size_t	len;
	char	*str;

	is_negative = n < 0;
	num = n;
	if (is_negative == 1)
		num = -num;
	len = aux_numlen(num) + is_negative;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (num >= 10)
	{
		str[--len] = (num % 10) + '0';
		num = num / 10;
	}
	str[--len] = (num % 10) + '0';
	if (is_negative == 1)
		str[0] = '-';
	return (str);
}
