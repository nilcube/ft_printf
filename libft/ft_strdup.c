/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:14:10 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/21 22:11:07 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_str;
	size_t	buff_size;

	buff_size = ft_strlen(s) + 1;
	new_str = malloc(sizeof(char) * buff_size);
	if (new_str)
		ft_strlcpy(new_str, s, buff_size);
	return (new_str);
}
