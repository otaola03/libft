/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:56:01 by jperez            #+#    #+#             */
/*   Updated: 2022/09/12 19:49:38 by jperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dst;
	t_list	*new;

	if (lst || f || del)
	{
		dst = NULL;
		while (lst != NULL)
		{
			new = ft_lstnew((*f)(lst->content));
			if (!new)
			{
				ft_lstclear(&dst, del);
				return (NULL);
			}
			ft_lstadd_back(&dst, new);
			lst = lst->next;
		}
		return (dst);
	}
	return (NULL);
}
