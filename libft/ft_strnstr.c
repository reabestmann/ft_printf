/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:29:27 by rbestman          #+#    #+#             */
/*   Updated: 2024/11/25 14:13:12 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	i;
	size_t	j;

	if (small[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < n && big[i])
	{
		if (big[i] == small[0])
		{
			j = 0;
			while (small[j] && (i + j) < n)
			{
				if (big[i + j] != small[j])
					break ;
				j++;
			}
			if (small[j] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
