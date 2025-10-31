/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:08:36 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/30 21:09:08 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	valid_flag(char c)
{
	int	i;

	i = 0;
	while (FLAGS[i])
		if (FLAGS[i++] == c)
			return (1);
	return (0);
}

int	valid_conversions(char c)
{
	int	i;

	i = 0;
	while (CONVERSIONS[i])
		if (CONVERSIONS[i++] == c)
			return (1);
	return (0);
}

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}
/*
int	ft_parse(va_list list, const char *sub_fmt)
{
	int	i;
	int	flags;

	flags = 0;
	i = 1;
	while (sub_fmt[i])
	{
		if (valid_conversions(sub_fmt[i]))
			print_(flags, )
	}
	return (i);
}*/
