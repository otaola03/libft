/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:32:46 by jperez            #+#    #+#             */
/*   Updated: 2022/09/13 16:35:01 by jperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	if (lst && del)
	{
		while (*lst != NULL)
		{
			ptr = *lst;
			*lst = (*lst)->next;
			ft_lstdelone(ptr, del);
		}
	}
	lst = NULL;
}
