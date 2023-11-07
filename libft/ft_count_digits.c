/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averin <averin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:20:49 by averin            #+#    #+#             */
/*   Updated: 2023/08/13 16:36:40 by averin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_digits_base(long n, int base)
{
	int digits;

	digits = 0;
	while (n > 0)
	{
		n /= base;
		digits++;
	}
	return (digits);
}

int		ft_count_digits(long n)
{
	return (ft_count_digits_base(n, 10));
}
