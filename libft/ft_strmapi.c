/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averin <averin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:03:46 by averin            #+#    #+#             */
/*   Updated: 2023/08/11 20:07:14 by averin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*r;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	r = (char *) ft_calloc(ft_strlen(s), sizeof(char));
	if (!r)
		return (NULL);
	i = -1;
	while (s[++i])
		r[i] = f(i, s[i]);
	return (r);
}
