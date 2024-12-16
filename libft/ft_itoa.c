/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:02:43 by rbestman          #+#    #+#             */
/*   Updated: 2024/11/25 14:38:43 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_negative(int n)
{
	return (n < 0);
}

static int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	if (ft_is_negative(n))
	{
		n = -n;
		count++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	int		neg;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	neg = ft_is_negative(n);
	len = ft_count_digits(n);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (neg)
		n = -n;
	while (n > 0)
	{
		s[--len] = n % 10 + '0';
		n /= 10;
	}
	if (neg)
		s[0] = '-';
	return (s);
}
