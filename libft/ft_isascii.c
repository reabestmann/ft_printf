/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 09:30:32 by rbestman          #+#    #+#             */
/*   Updated: 2024/11/25 11:45:51 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}