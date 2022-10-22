/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 21:55:02 by jperez            #+#    #+#             */
/*   Updated: 2022/09/12 19:50:55 by jperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cont;
	t_list	*ptr;

	ptr = lst;
	cont = 0;
	while (ptr)
	{
		ptr = ptr->next;
		cont++;
	}
	return (cont);
}
