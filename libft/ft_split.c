/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:13:43 by rbestman          #+#    #+#             */
/*   Updated: 2024/11/27 18:30:28 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			s = ft_strchr(s, c);
			if (!s)
				break ;
		}
	}
	return (count);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	ft_free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	**ptr;

	if (!s)
		return (NULL);
	split = malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	ptr = split;
	while (ft_wordcount(s, c))
	{
		while (*s == c)
			s++;
		*ptr = ft_substr(s, 0, ft_wordlen(s, c));
		if (!*ptr)
		{
			ft_free_split(split);
			return (NULL);
		}
		s += ft_wordlen(s, c);
		ptr++;
	}
	*ptr = NULL;
	return (split);
}
