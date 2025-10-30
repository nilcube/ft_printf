/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:07:34 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/30 12:36:46 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	g_stdout_count = 0;
int	ft_printf(const char *fmt, ...)
{
	int	entered_conv;

	entered_conv = 0;
	while (*fmt)
	{
		if (!entered_conv && *fmt != '%')
			ft_putchar(*fmt++);
		else
			fmt++;
	}
	return (g_stdout_count);
}
