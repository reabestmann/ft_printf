/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:52:39 by rbestman          #+#    #+#             */
/*   Updated: 2024/12/14 19:41:05 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
//int		ft_valid_specifier(va_list args, const char specifier);
int		ft_print_char(char c);
int		ft_print_signed_int(int num);
int		ft_print_ptr(void *ptr);
int		ft_print_str(va_list args);
int		ft_print_unsigned_int(unsigned int num);
int		ft_print_hex( unsigned int num, char speficier);
char	*ft_utoa(unsigned int num);

#endif
