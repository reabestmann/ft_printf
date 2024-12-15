/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:54:19 by rbestman          #+#    #+#             */
/*   Updated: 2024/12/14 15:00:51 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_printf.h"

static int	ft_calculate_hex_len(unsigned long value)
{
	int	len;

	len = 2;
	while (value)
	{
		len++;
		value /= 16;
	}
	return (len);
}

static char	*ft_convert_ptr(unsigned long value)
{
	char	*str;
	int		len;

	len = ft_calculate_hex_len(value);
	if (value == 0)
		str = ft_strdup("0x0");
	else
		str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	while (value > 0)
	{
		str[len--] = "0123456789abcdef"[value % 16];
		value /= 16;
	}
	str[1] = 'x';
	str[0] = '0';
	return (str);
}

int	ft_print_ptr(void *ptr)
{
	char	*str;
	int		len;

	len = 0;
	str = ft_convert_ptr((unsigned long)ptr);
	if (str)
	{
		len = ft_strlen(str);
		ft_putstr_fd(str, 1);
		free(str);
	}
	return (len);
}
