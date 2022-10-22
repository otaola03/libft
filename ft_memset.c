/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:16:50 by jperez            #+#    #+#             */
/*   Updated: 2022/09/02 10:29:08 by jperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*ptr;

	ptr = s;
	i = 0;
	while (n-- > 0)
		*(ptr++) = c;
	return (s);
}
