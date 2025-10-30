/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:37:46 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/25 17:23:28 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_contains(char const *set, char chr)
{
	while (*set)
		if (*set++ == chr)
			return (1);
	return (0);
}

static char	*_end(char const *s1, char const *set)
{
	long		i;
	const char	*str_end;

	i = ft_strlen(s1);
	str_end = s1 + i;
	while (s1[--i])
	{
		if (!_contains(set, s1[i]))
			break ;
		str_end = &s1[i];
	}
	return ((char *)str_end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*str_end;
	const char	*str_start;
	long		i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	str_start = s1;
	while (s1[i])
	{
		str_start = s1 + i;
		if (!_contains(set, s1[i++]))
			break ;
	}
	if (!set[0])
		return (ft_strdup(s1));
	if (!str_start[1])
		return (ft_strdup(""));
	str_end = _end(s1, set);
	return (ft_substr(s1, str_start - s1, str_end - str_start));
}
