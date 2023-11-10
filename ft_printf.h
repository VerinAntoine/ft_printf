/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averin <averin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:19:26 by averin            #+#    #+#             */
/*   Updated: 2023/11/10 13:25:21 by averin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	print_char(char c);
int	print_str(char *s);
int	print_base(unsigned int i, char *base);
int	print_ptr_hexa(unsigned long n);
int	print_int(int i);
int	print_unsigned_int(unsigned int i);

#endif
