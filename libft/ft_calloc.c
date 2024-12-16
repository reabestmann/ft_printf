/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:37:18 by rbestman          #+#    #+#             */
/*   Updated: 2024/12/04 09:57:54 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*space;
	size_t	fullsize;
	size_t	i;

	fullsize = nmemb * size;
	space = malloc(fullsize);
	if (space == NULL)
		return (NULL);
	i = 0;
	while (i < fullsize)
	{
		space[i] = 0;
		i++;
	}
	return ((void *)space);
}
