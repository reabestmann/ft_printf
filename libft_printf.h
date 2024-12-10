/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:52:39 by rbestman          #+#    #+#             */
/*   Updated: 2024/12/10 23:20:08 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_valid_specifier(char specifier, va_list args);
void	ft_print_char(va_list args);
int		ft_print_signed_int(va_list args);
int		ft_print_ptr(va_list args);
int		ft_print_str(va_list args);
int		ft_print_unsigned_int(va_list args);
int		ft_print_hex(char specifier, va_list args);
char	*ft_utoa(unsigned int num);

#endif
