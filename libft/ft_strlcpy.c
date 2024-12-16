/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:27:02 by rbestman          #+#    #+#             */
/*   Updated: 2024/11/25 12:16:18 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	l;

	l = 0;
	if (size > 0)
	{
		while ((l < size - 1) && src[l])
		{
			dst[l] = src[l];
			l++;
		}
		dst[l] = 0;
	}
	return (ft_strlen((char *)src));
}
