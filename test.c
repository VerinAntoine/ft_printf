/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averin <averin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:02:45 by averin            #+#    #+#             */
/*   Updated: 2023/11/09 16:26:25 by averin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	char *s = 0;
	int a = printf(" %p %p \n", LONG_MIN, LONG_MAX);
	int b = ft_printf(" %p %p \n", LONG_MIN, LONG_MAX);
	printf("result: %d vs %d\n", a, b);
}
