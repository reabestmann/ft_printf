/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:29:35 by rbestman          #+#    #+#             */
/*   Updated: 2024/11/25 12:18:00 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	l;

	dlen = ft_strlen(dst);
	slen = ft_strlen((char *)src);
	if (size <= dlen)
		return (size + slen);
	l = 0;
	while (src[l] && (dlen + l < size - 1))
	{
		dst[dlen + l] = src[l];
		l++;
	}
	dst[dlen + l] = 0;
	return (dlen + slen);
}
