/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 22:04:51 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/30 22:05:15 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	ln;
	int		sign;

	sign = 0;
	ln = n;
	if (n < 0)
	{
		ft_putchar('-');
		ln = -ln;
		sign = 1;
	}
	if (ln <= 9)
		return (ft_putchar(ln + '0') + sign);
	return (ft_putnbr(ln / 10) + ft_putnbr(ln % 10) + sign);
}
