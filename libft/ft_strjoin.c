/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:47:53 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/22 11:23:33 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	nw_buff_size;
	char	*new_str;

	if (!s1 || !s2)
		return (NULL);
	nw_buff_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_str = malloc(sizeof(char) * nw_buff_size);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, nw_buff_size);
	ft_strlcat(new_str, s2, nw_buff_size);
	return (new_str);
}
