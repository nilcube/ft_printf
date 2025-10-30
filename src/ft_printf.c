/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:07:34 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/30 22:14:09 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static int	g_stdout_count = 0;

int	quick_print(char c, va_list list)
{
	if (c == '%')
		ft_putchar('%');
	else if (c == 'c')
		ft_putchar(va_arg(list, int));
	else if (c == 'd')
		return (ft_putnbr(va_arg(list, int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(c, va_arg(list, int)));
	return (1);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	list;
	int		count;

	count = 0;
	va_start(list, fmt);
	while (*fmt)
	{
		if (*fmt != '%')
			count += ft_putchar(*fmt++);
		else
		{
			if (valid_conversions(fmt[1]))
			{
				count += quick_print(*++fmt, list);
				fmt++;
			}
			else
				fmt++;
		}
	}
	return (count);
}
