/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 09:34:42 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/25 10:07:57 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	_putnbr(int n, int fd)
{
	int	sign;

	if (!n)
		return ;
	sign = 1 * !(n < 0) - 1 * (n < 0);
	_putnbr(n / 10, fd);
	ft_putchar_fd((n % 10) * sign + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (!n)
		ft_putchar_fd('0', fd);
	else if (n < 0)
		ft_putchar_fd('-', fd);
	_putnbr(n, fd);
}
