/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averin <averin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:42:57 by averin            #+#    #+#             */
/*   Updated: 2023/11/09 16:19:05 by averin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dispatch(const char type, va_list ap)
{
	if (type == 'c')
		return (print_char(va_arg(ap, int)));
	if (type == 's')
		return (print_str(va_arg(ap, char *)));
	if (type == 'p')
		return (print_ptr_hexa(va_arg(ap, unsigned long)));
	if (type == 'd' || type == 'i')
		return (print_int(va_arg(ap, int)));
	if (type == 'u')
		return (print_unsigned_int(va_arg(ap, unsigned int)));
	if (type == 'x')
		return (print_base(va_arg(ap, int), "0123456789abcdef"));
	if (type == 'X')
		return (print_base(va_arg(ap, int), "0123456789ABCDEF"));
	if (type == '%')
		return (print_char('%'));
	return (1);
}

int	ft_printf(const char *s, ...)
{
	int		chars;
	va_list	ap;

	va_start(ap, s);
	chars = 0;
	while (*s)
	{
		if (*s == '%')
		{
			chars += dispatch(s[1], ap);
			s += 2;
		}
		else
		{
			ft_putchar_fd(*s++, 1);
			chars++;
		}
	}
	va_end(ap);
	return (chars);
}
