/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:55:13 by rbestman          #+#    #+#             */
/*   Updated: 2024/12/10 23:33:41 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_printf.h"

static size_t	ft_check_specifier(const char *format, va_list args)
{
	va_list	args_cpy;
	char	specifier;
	int		len;

	len = 1;
	specifier = *(format + 1);
	if (ft_strchr("cdpsiuxX%", specifier))
	{
		va_copy(args_cpy, args);
		len += ft_valid_specifier(specifier, args_cpy);
		va_end(args_cpy);
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	if (!format)
		return (-1);
	if (format[ft_strlen(format) - 1] == '%'
		&& !(ft_strchr("cdpsiuxX%", format[ft_strlen(format) - 2])))
		return (-1);
	va_start(args, format);
	len = 0;
	while (format[len])
	{
		if (format[len] == '%')
			len += ft_check_specifier(&format[len], args);
		else
			ft_putchar_fd(format[len], 1);
		len++;
	}
	va_end(args);
	return (len);
}
