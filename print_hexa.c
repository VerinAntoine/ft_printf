/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averin <averin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:18:44 by averin            #+#    #+#             */
/*   Updated: 2023/08/13 16:39:02 by averin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#define HEX_BASE "0123456789abcdef"

int	print_hexa(long n)
{
	ft_putstr_fd("0x", 1);
	ft_putnrb_base_fd(n, HEX_BASE, 1);
	return (2 + ft_count_digits_base(n, 16));
}
