/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averin <averin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 21:49:31 by averin            #+#    #+#             */
/*   Updated: 2023/08/11 13:49:36 by averin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	size_t			i;

	if (dest == NULL || src == NULL)
		return (NULL);
	p = dest;
	i = -1;
	while (++i < n)
		p[i] = ((unsigned char *) src)[i];
	return (dest);
}
