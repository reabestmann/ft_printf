/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:54:07 by rbestman          #+#    #+#             */
/*   Updated: 2024/12/11 00:30:46 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_printf.h"

static int	ft_calculate_hex_len(unsigned int num)
{
	int	len;

	len = 2;
	while (num)
	{
		len++;
		num /= 16;
	}
	return (len);
}

static char	*ft_convert_hex(unsigned int num)
{
	char	*str;
	int		len;

	if (num == 0)
		return (ft_strdup("0x0"));
	len = ft_calculate_hex_len(num);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (num)
	{
		str[len--] = "0123456789abcdef"[num % 16];
		num /= 16;
	}
	str[1] = 'x';
	str[0] = '0';
	return (str);
}

static char	*ft_str_toupper(char *str)
{
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
	return (str);
}

int	ft_print_hex(char specifier, va_list args)
{
	unsigned int	num;
	char			*str;
	int				len;

	len = 0;
	num = va_arg(args, unsigned int);
	str = ft_convert_hex(num);
	if (str)
	{
		len = ft_strlen(str);
		if (specifier == 'X')
			str = ft_str_toupper(str);
		ft_putstr_fd(str, 1);
		free (str);
	}
	return (len);
}
