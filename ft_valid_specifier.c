/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_specifier.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:58:47 by rbestman          #+#    #+#             */
/*   Updated: 2024/12/11 00:29:23 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_printf.h"

int	ft_valid_speficier(char specifier, va_list args)
{
	int	len;

	len = 1;
	if (specifier == '%')
		ft_putchar_fd('%', 1);
	if (specifier == 'c')
		ft_print_char(args);
	if (specifier == 's')
		len += ft_print_str(args);
	if (specifier == 'd' || specifier == 'i')
		len += ft_print_signed_int(args);
	if (specifier == 'u')
		len += ft_print_unsigned_int(args);
	if (specifier == 'p')
		len += ft_print_ptr(args);
	if (specifier == 'x' | specifier == 'X')
		len += ft_print_hex(specifier, args);
	va_end(args);
	return (len);
}
