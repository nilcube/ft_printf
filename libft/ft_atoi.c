/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:43:52 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/21 17:04:24 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_isspace(char c)
{
	return (c == ' ' || (c <= 13 && c >= 9));
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signe;
	int	num;

	i = 0;
	signe = 1;
	num = 0;
	while (_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		signe -= ('-' == nptr[i++]) * 2;
	while (ft_isdigit(nptr[i]))
	{
		num *= 10;
		num += (nptr[i] - '0');
		i++;
	}
	return (num * signe);
}
/*
int	ft_atoi(const char *nptr)
{
	int	i;
	int	signe;
	int	num;

	i = 0;
	signe = 1;
	num = 0;
	while (_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		signe -= ('-' == nptr[i++]) * 2;
	while (ft_isdigit(nptr[i]))
	{
		num *= 10;
		num += (nptr[i] - '0') * signe;
		i++;
	}
	return (num);
}

*/
