/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:55:13 by rbestman          #+#    #+#             */
/*   Updated: 2024/12/14 20:06:58 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_printf.h"

static int     ft_valid_specifier(va_list args, const char specifier)
{
        if (specifier == 'c')
                return (ft_print_char(va_arg(args, int)));
        else if (specifier == '%')
                return (ft_print_char('%'));
        else if (specifier == 's')
                return (ft_print_str(args));
        else if (specifier == 'd' || specifier == 'i')
                return (ft_print_signed_int(va_arg(args, int)));
        else if (specifier == 'u')
                return (ft_print_unsigned_int(va_arg(args, unsigned int)));
        else if (specifier == 'p')
                return (ft_print_ptr(va_arg(args, void *)));
        else if (specifier == 'x' || specifier == 'X')
                return (ft_print_hex(va_arg(args, unsigned int), specifier));
        else
                return (0);
}
 
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	if (!format)
		return (-1);
	//if (format[ft_strlen(format) - 1] == '%'
	//	&& !(ft_strchr("cdpsiuxX%", format[ft_strlen(format) - 2])))
	//	return (-1);
	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len += ft_valid_specifier(args, *format);
		}
		else
			len += ft_print_char(*format);
		format++;
	}
	va_end(args);
	return (len);
}
