/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:09:11 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/25 11:53:47 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (src[len] && len + 1 < size)
	{
		dst[len] = src[len];
		len++;
	}
	if (size)
		dst[len] = 0;
	while (src[len])
		++len;
	return (len);
}
