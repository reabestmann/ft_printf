/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:18:13 by rbestman          #+#    #+#             */
/*   Updated: 2024/11/25 15:07:54 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				l;
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	ptr1 = dst;
	ptr2 = src;
	if (!dst && !src)
		return (NULL);
	if (ptr2 < ptr1)
	{
		while (n-- > 0)
		{
			ptr1[n] = ptr2[n];
		}
	}
	else
	{
		l = 0;
		while (l < n)
		{
			ptr1[l] = ptr2[l];
			l++;
		}
	}
	return (dst);
}
