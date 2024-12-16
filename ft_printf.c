/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:55:13 by rbestman          #+#    #+#             */
/*   Updated: 2024/12/16 14:48:01 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_printf.h"

static int	ft_valid_specifier(va_list args, const char specifier)
{
	if (specifier == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (specifier == '%')
		return (ft_print_char('%'));
	else if (specifier == 's')
		return (ft_print_str(va_arg(args, char *)));
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

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		len;

	if (!input)
		return (-1);
	va_start(args, input);
	len = 0;
	while (*input)
	{
		if (*input == '%')
		{
			input++;
			if (*input == '\0')
			{
				len = -1;
				break ;
			}
			len += ft_valid_specifier(args, *input);
		}
		else
			len += ft_print_char(*input);
		input++;
	}
	va_end(args);
	return (len);
}
