/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:07:34 by smahraz           #+#    #+#             */
/*   Updated: 2025/12/04 17:55:23 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

// static int	g_stdout_count = 0;

int	quick_print(char c, va_list list)
{
	unsigned long	adr;

	if (c == '%')
		ft_putchar('%');
	else if (c == 'c')
		ft_putchar(va_arg(list, int));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(list, int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(c, va_arg(list, unsigned int)));
	else if (c == 's')
		return (ft_putstr_null(va_arg(list, char *)));
	else if (c == 'u')
		return (ft_uputnbr(va_arg(list, unsigned int)));
	else if (c == 'p')
	{
		adr = va_arg(list, unsigned long);
		if (adr)
			return (ft_putstr_null("0x") + ft_puthex('x', adr));
		return (ft_putstr_null("(nil)"));
	}
	return (1);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	list;
	int		count;

	if (!fmt)
		return (-1);
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
				fmt += 1 + (fmt[1] != 0);
		}
	}
	va_end(list);
	return (count);
}
