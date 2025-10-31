/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:08:36 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/31 11:47:21 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	valid_conversions(char c)
{
	int	i;

	i = 0;
	while (CONVERSIONS[i])
		if (CONVERSIONS[i++] == c)
			return (1);
	return (0);
}
