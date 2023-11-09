/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_base.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averin <averin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:29:01 by averin            #+#    #+#             */
/*   Updated: 2023/11/09 16:04:06 by averin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_base(unsigned int i, char *base)
{
	ft_putnbr_unsigned_base_fd(i, base, 1);
	return (ft_count_unsigned_digits_base(i, ft_strlen(base)));
}
