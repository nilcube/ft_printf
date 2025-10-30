/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 21:20:13 by smahraz           #+#    #+#             */
/*   Updated: 2025/10/27 00:15:40 by smahraz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*cur;

	if (!del)
		return ;
	next = *lst;
	while (next)
	{
		cur = next;
		next = next->next;
		ft_lstdelone(cur, del);
	}
	*lst = NULL;
}
