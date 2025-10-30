/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 22:22:15 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/22 10:37:44 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	_min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	return (a);
}

static char	*_empty_str(void)
{
	char	*chr;

	chr = malloc(sizeof(char));
	if (chr)
		chr[0] = 0;
	return (chr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	min_;
	size_t	src_len;
	char	*sub_str;

	if (!s)
		return (NULL);
	src_len = ft_strlen(s);
	if (src_len <= start || !len)
		return (_empty_str());
	src_len = src_len - start;
	min_ = _min(src_len, len);
	sub_str = malloc(sizeof(char) * (min_ + 1));
	if (!sub_str)
		return (NULL);
	ft_strlcpy(sub_str, s + start, min_ + 1);
	return (sub_str);
}
