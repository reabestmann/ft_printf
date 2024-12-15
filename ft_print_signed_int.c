/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_signed_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:54:30 by rbestman          #+#    #+#             */
/*   Updated: 2024/12/13 15:27:07 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft_printf.h"

int	ft_print_signed_int(int num)
{
	int		len;
	char	*str;

	len = 0;
	str = ft_itoa(num);
	if (str)
	{
		ft_putstr_fd(str, 1);
		len = ft_strlen(str);
		free(str);
	}
	return (len);
}
