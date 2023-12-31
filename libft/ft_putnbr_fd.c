/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averin <averin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:14:27 by averin            #+#    #+#             */
/*   Updated: 2023/11/09 15:16:31 by averin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	recu(long n, char *base, int base_len, int fd)
{
	if (n >= base_len)
		recu(n / base_len, base, base_len, fd);
	ft_putchar_fd(base[n % base_len], fd);
}

void	ft_putnbr_base_fd(long n, char *base, int fd)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	recu(n, base, base_len, fd);
}

void	ft_putnbr_fd(long n, int fd)
{
	ft_putnbr_base_fd(n, "0123456789", fd);
}
