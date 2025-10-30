/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 09:50:01 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/25 21:17:44 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_nlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		nlen;
	int		sign;
	char	*nstr;

	sign = 1 - (n < 0) * 2;
	nlen = _nlen(n) + (n < 0);
	nstr = malloc(nlen + 1);
	if (!nstr)
		return (NULL);
	nstr += nlen;
	*nstr = 0;
	if (!n && nstr--)
	{
		*nstr = '0';
		return (nstr);
	}
	while (n && nstr--)
	{
		*nstr = (n % 10) * sign + '0';
		n /= 10;
	}
	if (sign < 0)
		nstr[-1] = '-';
	return (nstr - (sign < 0));
}
