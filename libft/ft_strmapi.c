/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:51:34 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/24 15:19:28 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*nw_str;

	if (!s || !f)
		return (NULL);
	nw_str = ft_strdup(s);
	if (!nw_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		nw_str[i] = f(i, s[i]);
		i++;
	}
	return (nw_str);
}
