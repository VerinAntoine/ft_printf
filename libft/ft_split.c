/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:20:37 by averin            #+#    #+#             */
/*   Updated: 2023/11/07 11:28:03 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_next_char_index(const char *s, char c)
{
	size_t	i;

	i = -1;
	while (s[++i])
	{
		if (s[i] == c)
			return (i);
	}
	return (i);
}

static size_t	count_words(const char *s, char c)
{
	size_t	r;

	r = 0;
	while (*s && *s == c)
		s++;
	if (*s == 0)
		return (0);
	while (*s)
	{
		if (*s == c)
		{
			r++;
			while (*s == c)
				s++;
			if (*s == 0)
				return (r);
		}
		s++;
	}
	return (r + 1);
}

static int	free_split(char **s)
{
	size_t	i;

	i = -1;
	while (s[++i] != NULL)
		free(s[i]);
	free(s);
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**r;
	size_t	i;
	size_t	k;
	size_t	next;

	r = (char **) ft_calloc(count_words(s, c) + 1, sizeof(char *));
	k = -1;
	i = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		next = get_next_char_index(s + i, c);
		r[++k] = ft_substr(s, i, next);
		if (r[k] == NULL && free_split(r))
			return (NULL);
		i += next;
		while (s[i] == c && s[i])
			i++;
	}
	return (r);
}
