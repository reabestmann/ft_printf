/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:55:38 by rbestman          #+#    #+#             */
/*   Updated: 2024/12/10 23:34:49 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_printf.h"

static int	ft_count_digits(unsigned int num)
{
	int	digits;

	digits = 0;
	while (num > 0)
	{
		num /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_utoa(unsigned int num)
{
	char			*str;
	unsigned int	len;

	if (num == 0)
		return (ft_strdup("0"));
	len = ft_count_digits(num);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (num > 0)
	{
		str[--len] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}
