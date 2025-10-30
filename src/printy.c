/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:50:54 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/30 12:38:13 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

t_printy	*new_printy(char conv, void *data, int flags)
{
	t_printy	*printy;

	printy = malloc(sizeof(t_printy));
	if (printy)
	{
		printy->conv = conv;
		printy->data = data;
		printy->flags = flags;
	}
	return (printy);
}
