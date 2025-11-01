/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_null.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 23:47:24 by smahraz           #+#    #+#             */
/*   Updated: 2025/11/01 23:47:28 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_null(char *s)
{
	int	len;

	if (!s)
		return (ft_putstr_null("(null)"));
	len = ft_strlen(s);
	write(STDOUT, s, len);
	return (len);
}
