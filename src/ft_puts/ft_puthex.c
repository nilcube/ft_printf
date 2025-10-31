/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 22:16:21 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/31 11:03:45 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(char c, unsigned int n)
{
	int	start_printing;
	int	i;
	int	count;

	if (!n)
		return (ft_putchar('0'));
	count = 0;
	i = 4 * 8 - 4;
	start_printing = 0;
	while (i >= 0)
	{
		if (!start_printing)
			start_printing = n >> i;
		if (start_printing)
		{
			if (c == 'X')
				ft_putchar(HEX[(n >> i) % 16]);
			else
				ft_putchar(HEXL[(n >> i) % 16]);
			count++;
		}
		i -= 4;
	}
	return (count);
}
