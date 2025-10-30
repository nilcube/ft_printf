/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:44:07 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/27 11:05:34 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	slen;

	len = 0;
	slen = 0;
	while (dst[len] && len < size)
		len++;
	while (src[slen] && len + 1 < size)
		dst[len++] = src[slen++];
	if (len + 1 <= size)
		dst[len] = 0;
	while (src[slen++])
		len++;
	return (len);
}
