/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:55:00 by rbestman          #+#    #+#             */
/*   Updated: 2024/12/10 23:29:32 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_printf.h"

int	ft_print_unsigned_int(va_list args)
{
	int				len;
	char			*str;
	unsigned int	num;

	num = va_arg(args, unsigned int);
	len = 0;
	str = ft_utoa(num);
	if (str)
	{
		len = ft_strlen(str);
		ft_putstr_fd(str, 1);
		free(str);
	}
	return (len);
}
