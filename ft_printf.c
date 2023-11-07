/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averin <averin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:42:57 by averin            #+#    #+#             */
/*   Updated: 2023/08/13 16:39:11 by averin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	print_char(char c);
int	print_str(char *s);
int	print_hexa(long n);

int	dispatch(const char type, va_list ap)
{
	if (type == 'c')
		return (print_char(va_arg(ap, int)));
	if (type == 's')
		return (print_str(va_arg(ap, char *)));
	if (type == 'p')
		return (print_hexa(va_arg(ap, long)));
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
